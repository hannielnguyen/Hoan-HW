#include <iostream>
#include <vector>

using namespace std;

void numbers() {
	system("cls");
	int a;
	cin >> a;
	char sign;
	cin >> sign;
	int b;
	cin >> b;
	if (sign == '+') cout << "Sum = " << a + b;
	if (sign == '-') cout << "Difference = " << a - b;
}

void input_array(vector<int>& arr, int& n) {
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		arr.push_back(k);
	}
}
void output_array(vector<int>& arr) {
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
}

void arrays() {
	system("cls");
	int n;
	cin >> n;
	char sign;
	vector <int> a;
	vector <int> b;
	vector <int> result;
	input_array(a,n);
	cin >> sign;
	input_array(b,n);
	if (sign == '+') {
		for (int i = 0; i < n; i++) {
			int k = a[i] + b[i];
			result.push_back(k);
		}
		cout << "Sum : ";
		output_array(result);
	}
	if (sign == '-') {
		for (int i = 0; i < n; i++) {
			int k = a[i] - b[i];
			result.push_back(k);
		}
		cout << "Difference : ";
		output_array(result);
	}
}

int main() {
	cout << "Calculator" << endl;
	cout << "1. Number" << endl;
	cout << "2. Array" << endl;
	cout << "Choice:" << endl;
	int choice; 
	cin >> choice;
	if (choice == 1) numbers();
	if (choice == 2) arrays();
	return 0;

}
