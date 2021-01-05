#include<iostream>
#include<bits/stdc++.h>

using namespace std;

long long bcnn(long long a, long long b) {
	long long ucln = __gcd(a, b);
	return a * b / ucln;
}

main() {
	int T;
	cin >> T;
	while (T--) {
		long long n;
		cin >> n;
		long long a = 1;
		for (long long i = 2; i <= n; i++) {
			a = bcnn(a, i);
		}
		cout << a << endl;
	}
}