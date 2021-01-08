#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool check(long long n) {
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

main() {
	long long min, max;
	cin >> min >> max;
	if (max < min) {
		long long t = max;
		max = min;
		min = t;
	}
	for (min; min <= max; min++) {
		if (check(min)) {
			cout << min << " ";
		}
	}
}