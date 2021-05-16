#include<iostream>
#include<vector>

using namespace std;

vector<int> quick_sort(vector<int> a) {
	if (a.size() > 1) {
		int k = a[a.size() - 1];
		a.pop_back();
		vector<int> b, c;
		for (int i = 0; i < a.size(); i++) {
			if (a[i] < k)
				b.push_back(a[i]);
			else 
				c.push_back(a[i]);
		}
		vector<int> d = quick_sort(b), v = quick_sort(c);
		d.push_back(k);
		d.insert(d.end(), v.begin(), v.end());
		return d;
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
	b = quick_sort(a);
	for (int i = 0; i < b.size(); i++)
		cout << b[i] << " ";
}