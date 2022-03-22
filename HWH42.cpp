#include<iostream>
using namespace std;
void enterarray(int*& a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "enter a[" << i << "]" << endl;
		cin >> a[i];
	}
}
void outputarray(int*& a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << " " << a[i];
	}
}
 
void permutation(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
void sortdescending(int*& a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				permutation(a[i], a[j]);
			}
		}
 
	}
}
void Sortupascending(int*& a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				permutation(a[i], a[j]);
			}
		}
 
	}
}
int main()
{
	int n;
	cout << "enter n:";
	cin >> n;
	int* a = new int[n];
	enterarray(a, n);
	outputarray(a, n);
	cout << endl;
	cout << "sorted array descending:";
	sortdescending(a, n);
	outputarray(a, n);
	cout << endl;
	cout << "Sort up ascending:";
	Sortupascending(a, n);
	outputarray(a, n);
	delete[]a;
	
}