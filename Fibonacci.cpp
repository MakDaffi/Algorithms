#include <iostream>
#include <vector>

using namespace std;

unsigned long long algfib(int n) {
	vector<unsigned long long> a;
	a.resize(n + 1);
	a[0] = 0;
	a[1] = 1;
	for (int i = 2; i <= n; i++) 
		a[i] = a[i - 1] + a[i - 2];
	return a[n];
}

int main() {
	cout << "Enter Fibonacci number ";
	int n;
	cin >> n;
	cout << algfib(n);
}