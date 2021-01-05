#include<iostream>

using namespace std;

main() {
	int t;
	cin >> t;
	while (t--) {
		long long a, m;
		cin >> a >> m;
		bool check = false;
		for (int i = 0; i < m; i++) {
			if ((a * i) % m == 1) {
				cout << i << endl;
				check = true;
				break;
			}
		}
		if (!check) {
			cout << -1 << endl;
		}
	}
}
