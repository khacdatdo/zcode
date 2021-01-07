#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool check(int n) {
    if (n <= 3) {
        return n > 1;
    } else if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (int i = 5; i <= sqrt(n); i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

main() {
    int t;
    cin >> t;
    while (t--) {
        int n, c = 3;
        cin >> n;
        for (int i = 2; i <= n; i++) {
            if (check(i) && n % i == 0) {
                c--;
                n /= i;
            }
        }
        if (!c && n == 1) {
            cout <<  1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
}