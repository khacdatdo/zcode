#include<bits/stdc++.h>

using namespace std;

bool isSmaller(string s1, string s2) {
	if (s1.length() < s2.length()) return true;
	if (s2.length() < s1.length()) return false;
	for (int i = 0; i < s1.length(); i++) {
		if (s1[i] < s2[i]) return true;
		else if (s2[i] < s1[i]) return false;
	}
	return false;
}

string findSum(string s1, string s2) {
	if (!isSmaller(s1, s2)) {
		swap(s1, s2);
	}
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	string res;
	int carry = 0;
	for (int i = 0; i < s1.length(); i++) {
		int sum = (s1[i] - '0') + (s2[i] - '0') + carry;
		if (sum > 9) {
			sum -= 10;
			carry = 1;
		} else {
			carry = 0;
		}
		res.push_back(sum + '0');
	}
	for (int i = s1.length(); i < s2.length(); i++) {
		int sum = (s2[i] - '0') + carry;
		if (sum > 9) {
			sum -= 10;
			carry = 1;
		} else {
			carry = 0;
		}
		res.push_back(sum + '0');
	}
	if (carry) {
		res.push_back(carry + '0');
	}
	reverse(res.begin(), res.end());
	return res;
}

main() {
	int t;
	cin >> t;
	while (t--) {
		string str1, str2;
		cin >> str1 >> str2;
		cout << findSum(str1, str2) << endl;
	}
}
