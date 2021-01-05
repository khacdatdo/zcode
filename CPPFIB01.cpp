#include<iostream>

using namespace std;

main() {
	int t;
	long long r = 1000000007;
	cin >> t;
	while (t--) {
		long long n, f[1001];
		cin >> n;
		for (int i = 0; i < n; i++) {
			if (i == 0) {
				f[i] = 0;
			} else if (i == 1) {
				f[i] = 1;
			} else {
				f[i] = f[i - 2] + f[i - 1];
			}
		}
		cout << f[n - 1] % r << endl;
	}
}
