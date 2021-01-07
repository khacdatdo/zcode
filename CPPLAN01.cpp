#include<bits/stdc++.h>

using namespace std;

bool isSmaller(string s1, string s2) {
	int len1 = s1.length(), len2 = s2.length();
	if (len1 < len2) return true;
	if (len2 < len1) return false;
	for (int i = 0; i < len1; i++) {
		if (s1[i] < s2[i]) {
			return true;
		} else if (s2[i] < s1[i]) {
			return false;
		}
	}
	return false;
}

string findDiff(string s1, string s2) {
	if (!isSmaller(s1, s2)) {
		swap(s1, s2);
	}
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	string result;
	int carry = 0;
	for (int i = 0; i < s1.length(); i++) {
		int sub = (s2[i] - '0') - (s1[i] - '0') - carry;
		if (sub < 0) {
			sub += 10;
			carry = 1;
		} else {
			carry = 0;
		}
		result.push_back('0' + sub);
	}
	for (int i = s1.length(); i < s2.length(); i++) {
		int sub = (s2[i] - '0') - carry;
		if (sub < 0) {
			sub += 10;
			carry = 1;
		} else {
			carry = 0;
		}
		result.push_back(sub + '0');
	}
	reverse(result.begin(), result.end());
	return result;
}

main() {
	int t;
	cin >> t;
	while (t--) {
		string str1;
		string str2;
		cin >> str1 >> str2;
		cout << findDiff(str1, str2) << endl;
	}
}