#include<vector>
#include<iostream>


using namespace std;

vector<int> pref(string s) {
	int k;
	vector<int> p(s.size(), 0);
	for (int i = 1; i < s.size(); i++) {
		k = p[i - 1];
		while (k > 0 && s[i] != s[k])
			k = p[k - 1];
		if (s[i] == s[k]) {
			k++;
			p[i] = k;
		}
	}
	return p;
}

vector<int> z_fun(string s) {
	vector<int> z(s.size(), 0);
	int l = 0, r = 0;
	z[0] = s.size();
	for (int i = 1; i < s.size(); i++) {
		z[i] = max(0, min(r - i, z[i - l]));
		while (i + z[i] < s.size() && s[z[i]] == s[z[i] + i])
			z[i]++;
		if (z[i] + i > r) {
			l = i;
			r = z[i] + i;
		}
	}
	return z;
}

