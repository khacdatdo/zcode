#include<iostream>
using namespace std;

bool check(long long n) {
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

main() {
	int t;
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;
		if (n >= 2) {
			cout << "2 ";
		}
		for (int i = 3; i <= n; i += 2) {
			if (check(i)) {
				cout << i << " ";
			}
		}
		cout << endl;
	}
}
