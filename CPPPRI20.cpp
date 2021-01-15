#include<iostream>
#include<cmath>
#include<bits/stdc++.h>

using namespace std;

int checkNT(long long n) {
    if (n <= 3) {
        return n > 1; 
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return 0;
    }
    for (int i = 5; i <= sqrt(n); i+= 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

main() {
    int t;
    cin >> t;
    while (t--) {
        int i, x, count = 0;
        cin >> x;
        for (i = 1; i <= x; i++) {
            if (__gcd(i, x) == 1) count++;
        }
        cout << checkNT(count) << endl;
    }
}