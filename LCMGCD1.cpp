#include<iostream>

using namespace std;

main(){
	long long a, b, lcm[100], gcd[100];
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		for (int j = 1; j <= a / 2; j++) {
			if (a % j == 0 && b % j == 0) {
				gcd[i] = j;
			}
		}
		lcm[i] = (a * b) / gcd[i];
	}
	for (int i = 0; i < t; i++) {
		cout << lcm[i] << " " << gcd[i] << endl;
	}
}
