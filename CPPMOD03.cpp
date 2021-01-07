#include<iostream>

using namespace std;

long long sodu(long long n, long long k) {
	if (n < k) {
		return n;
	}
	return n % k;
}

main() {
	int t;
	cin >> t;
	while (t--) {
		long long n, k, s = 0;
		cin >> n >> k;
		long long tong = 0;
		for (int i = 1; i <= n; i++) {
			tong += sodu(i, k);
		}
		cout << tong << endl;
	}
}
