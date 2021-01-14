#include<iostream>
#include<bits/stdc++.h>

using namespace std;

long long lcm(long long a, long long b) {
	long long ucln = __gcd(a, b);
	return (a * b) / ucln;
}

main() {
	int t;
	cin >> t;
	while (t--) {
		long long a, b;
		cin >> a >> b;
		cout << lcm(a, b) << " " << __gcd(a, b) << endl;
	}
}
