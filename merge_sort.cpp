#include<iostream>
#include<vector>

using namespace std;

vector<int> concat(vector<int> a, vector<int>b) {
	vector<int>c;
	int i = 0, j = 0;
	while ((a.size() + b.size()) != c.size()) {
		if ((i < a.size()) && ((j == b.size()) || (a[i] < b[j]))) {
			c.push_back(a[i]);
			i++;
		}
		else if (j < b.size()) {
			c.push_back(b[j]);
			j++;
		}
	}
	return c;
}

vector<int> merge_sort(vector<int> a) {
	if (a.size() > 1) {
		vector<int> b, c;
		for (int i = 0; i < a.size() / 2; i++)
			b.push_back(a[i]);
		for (int i = a.size() / 2; i < a.size(); i++)
			c.push_back(a[i]);
		return concat(merge_sort(b), merge_sort(c));
	}
	else return a;
}

int main() {
	int n;
	cout << "Enter size of your shit ";
	cin >> n;
	cout << "Enter your shit ";
	vector<int> a, b;
	a.resize(n);
	for (int i = 0; i < a.size(); i++)
		cin >> a[i];
	b = merge_sort(a);
	for (int i = 0; i < b.size(); i++)
		cout << b[i] << " ";
}