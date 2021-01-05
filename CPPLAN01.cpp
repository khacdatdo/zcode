#include<iostream>

using namespace std;

void cus_function(char a[], char b[]) {
	unsigned long long x = 0, y = 0, c_x = 0, c_y = 0;
	for (long long i = 0; a[i]; i++) {
			x = x*10 + (a[i] - '0');
			c_x++;
	}
	for (long long i = 0; b[i]; i++) {
			y = y*10 + (b[i] - '0');
			c_y++;
	}
	if (x > y) {
		unsigned long long res = x-y;
		unsigned long long c_res = 0;
		while (res / 10 > 0) {
			res /= 10;
			c_res++;
		}
		for (long long i = 1; i < c_x - c_res; i++) {
			cout << "0";
		}
		cout << x - y << endl;
	}
	else {
		unsigned long long res = y-x;
		unsigned long long c_res = 0;
		while (res / 10 > 0) {
			res /= 10;
			c_res++;
		}
		for (long long i = 1; i < c_y - c_res; i++) {
			cout << "0";
		}
		cout << y - x << endl;
	}
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
