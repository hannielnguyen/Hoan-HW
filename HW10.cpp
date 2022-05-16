#include <iostream>
using namespace std;

class Tree {
	int data;
	Tree* left, * right;
public:
	Tree() {
		data = 0;
		left = right = NULL;
	}
	Tree(int val) {
		data = val;
		left = right = NULL;
	}
	Tree* Insert(Tree* root, int val) {
		if (!root) {
			return new Tree(val);
		}
		if (val > root->data) {
			root->right = Insert(root->right, val);
		}
		else {
			root->left = Insert(root->left, val);
		}
		return root;

	}
	void Ascending(Tree* root) {
		if (!root) {
			return;
		}
		Ascending(root->left);
		cout << root->data << endl;
		Ascending(root->right);
	}
	void Decending(Tree* root) {
		if (!root) {
			return;
		}
		Decending(root->right);
		cout << root->data << endl;
		Decending(root->left);
	}
};

int main() {
	Tree tree;
	Tree * root = NULL;
	root = tree.Insert(root, 8);
	tree.Insert(root, 9);
	tree.Insert(root, 4);
	tree.Insert(root, 7);
	tree.Insert(root, 11);
	tree.Insert(root, 5);
	tree.Insert(root, 10);
	tree.Insert(root, 6);

	cout << "Output:" << endl;
	cout << "Ascending:" << endl;
	tree.Ascending(root);
	cout << "Decending:" << endl;
	tree.Decending(root);
	return 0;
}
