#include<iostream>

using namespace std;

void cus_function(char a[], char b[]) {
	unsigned long long x = 0, y = 0;
	for (long long i = 0; a[i]; i++) {
			x = x*10 + (a[i] - '0');
	}
	for (long long i = 0; b[i]; i++) {
			y = y*10 + (b[i] - '0');
	}
	cout << x+y << endl;
}

main() {
	int t;
	cin >> t;
	while (t--) {
		char a[1000], b[1000];
		cin >> a;
		cin >> b;
		cus_function(a, b);
	}
}
