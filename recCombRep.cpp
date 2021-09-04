#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector<string> ans;

void rec(vector<string> a, int m, string an) {
	if (an.size() == m) {
		ans.push_back(an);
	}
	else {
		for (int i = 0; i < a.size(); i++) {
			string b = an + a[i];
			rec(a, m, b);
		}
	}
}

int main() {
	cout << "Enter the number of your items: ";
	int n;
	cin >> n;
	cout << "Enter your items: ";
	vector<string> a;
	for (int i = 0; i < n; i++) {
		string b;
		cin >> b;
		a.push_back(b);
	}
	cout << "Enter M: ";
	int m;
	cin >> m;
	rec(a, m, "");
	cout << ans.size() << "\n";
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << "\n";
	}
}
