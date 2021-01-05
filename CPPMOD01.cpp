#include<iostream>

using namespace std;

main() {
	int t;
	cin >> t;
	while (t--) {
		long long x, y, p, res = 1;
		cin >> x >> y >> p;
		for (int i = 0; i < y; i++) {
			res = (res * x) % p;
		}
		cout << res << endl;
	}
}
