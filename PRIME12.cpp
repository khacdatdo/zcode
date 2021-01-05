#include<bits/stdc++.h>
#include<iostream>

using namespace std;

long long cus_function(long long n, long long k) {
	long long count = 0;
	while (n % 2 == 0) {
		count++;
		n >>= 1;
		if (count == k) {
			return 2;
		}
	}
	for (int i = 3; i <= n; i+= 2) {
		while (n % i == 0) {
			n /= i;
			count++;
			if (count == k) {
				return i;
			}
		}
	}
	return -1;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long n, k;
		cin >> n >> k;
		cout << cus_function(n, k) << endl;
	}
	return 0;
}
