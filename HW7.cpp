struct fraction {
	int a;
	int b;
	int GCD(const int &a, const int &b) {
		if (a == 0) return a;
		if (b == 0) return b;
		if (a == b) return a;
		if (a > b) return GCD(a - b, b);
		return GCD(a, b - a);
	}
	
};

void reduction(fraction& x) {
	cout << "fraction reduction :" << (x.a / x.GCD(x.a,x.b)) << "/" << (x.b / x.GCD(x.a,x.b));
}
void input(int* a, int& n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
void output(int* a, int& n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void sort(int* a, int& n) {
	for (int i = 0; i < n-1; i++) {
		if (a[i] > a[i + 1]) {
			swap(a[i], a[i + 1]);
		}
	}
}
int main() {
	int n;
	cin >> n;
	int* a = new int[n];
	input(a, n);
	sort(a, n);
	output(a, n);
	delete[]a;
	fraction x;
	cin >> x.a >> x.b;
	reduction(x);
}
