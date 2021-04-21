#include <iostream>
#include <vector>

using namespace std;

int algfib1(int n) {
	vector<int> a;
	a.resize(n + 1);
	a[0] = 0;
	a[1] = 1;
	for (int i = 2; i <= n; i++) 
		a[i] = (a[i - 1] + a[i - 2]) % 10;
	return a[n];
}

int main() {
	cout << "Enter Fibonacci number ";
	int n;
	cin >> n;
	cout << algfib1(n);
}