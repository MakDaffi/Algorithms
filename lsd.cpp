#include<iostream>
#include<vector>

using namespace std;

vector<int> concatenation(vector<vector<int>> a) {
	vector<int>b;
	for (int i = 0; i < a.size(); i++)
		if (a[i].size() != 0)
			b.insert(b.end(), a[i].begin(), a[i].end());
	return b;
}

void lsd(vector<int> &a, int n){
	int d = 10;
	int f = 1;
	for (int j = 0; j < n; n = n / 10) {
		vector<vector<int>> c;
		c.resize(10);
		for (int i = 0; i < a.size(); i++)
			c[a[i] % d / f].push_back(a[i]);
		f = d;
		d *= 10;
		a.resize(0);
		a = concatenation(c);
	}
}

int main() {
	int n;
	cout << "Enter size of your shit ";
	cin >> n;
	cout << "Enter your shit ";
	vector<int> a;
	a.resize(n);
	int max = -9999999;
	for (int i = 0; i < a.size(); i++) {
		cin >> a[i];
		if (a[i] > max) max = a[i];
	}
	lsd(a, max);
	for (int i = 0; i < a.size(); i++)
			cout << a[i] << " ";
}