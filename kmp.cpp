#include<iostream>
#include<string>
#include<vector>
#include"fun.h"

using namespace std;

int main() {
	string s;
	cout << "Enter your string ";
	cin >> s;
	string s1;
	cout << "Enter your substring ";
	cin >> s1;
	string s2 = s1 + "#" + s;
	vector<int> z = pref(s2);
	bool a = false;
	for (int i = s1.size() + 1; i < z.size(); i++) {
		if (z[i] == s1.size()) {
			cout << i - 2 * s1.size() + 1 << " ";
			a = true;
		}
	}
	if (!a) cout << "There is no such substring in this string";
}