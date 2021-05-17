#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector<int> gen_d(string s) {
	vector<int> d(255, s.size());
	for (int i = s.size() - 2; i >= 0; --i) {
		if (d[s[i]] == s.size())
			d[s[i]] = s.size() - i - 1;
	}
	return d;
}

bool b_m_h(string s, string s1, vector<int> d) {	
	for (int i = s1.size() - 1; i < s.size(); i) {
		int k = s1.size();
		bool a = true;
		for (int l = i, r = i + s1.size(); l <= r; ++l) {
			if (s[i] != s1[r - l - 1]) {
				a = false;
				i = i + d[s[l]];
				break;
			}
			if (a) return a;
		}
	}
	return false;
}

int main() {
	string s, s1;
	cout << "Enter your string ";
	getline(cin, s);
	cout << "Enter your substring ";
	getline(cin, s1);
	vector<int> d = gen_d(s1);
	if (b_m_h(s, s1, d))
		cout << "There is such a substring in our string " << endl;
	else 
		cout << "There is no such substring in our string! " << endl;
}