#include<iostream>
#include<vector>

using namespace std;

vector<int> countingsort(vector<int> a, int n)
{
	vector<int> c;
	c.resize(n + 1, 0);
	for (int i = 0; i < a.size(); i++)
		c[a[i]] += 1;
	return c;
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
	vector<int> c = countingsort(a, max);
	for (int i = 0; i < c.size(); i++)
		for (int j = 0; j < c[i]; j++)
			cout << i << " ";
}