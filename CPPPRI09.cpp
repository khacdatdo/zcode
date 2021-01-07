#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void test(long long n) {
	int hai = 0;
	while (n % 2 == 0) {
		hai++;
		n >>= 1;
	}
	if (hai) {
		cout << "2 " << hai << " ";
	}
	for (int i = 3; i <= n; i += 2) {
		int x = 0;
		while (n % i == 0) {
			x++;
			n /= i;
		}
		if (x) {
			cout << i << " " << x << " ";
		}
	}
	cout << endl;
}

main() {
	int t;
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;
		test(n);
	}
}
