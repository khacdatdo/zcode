#include<iostream>

using namespace std;

long long dequi(long long n, long long k, long long &s) {
	if (n == 0) return s;
	if (n < k || k == 0) {
		s += n;
	} else {
		s += n % k;
	}
	dequi(n - 1, k, s);
}

main() {
	int t;
	cin >> t;
	while (t--) {
		long long n, k, s = 0;
		cin >> n >> k;
		cout << dequi(n, k, s) << endl;
	}
}
