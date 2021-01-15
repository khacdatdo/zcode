#include<iostream>
#include<bits/stdc++.h>

using namespace std;

main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        unsigned long long b, m, k = 0;
        cin >> a >> b >> m;
        for (int i = 0; i < a.length(); i++) {
            k = (k * 10 + a[i] - '0') % m;
        }
        unsigned long long res = k;
        for (long long i = 1; i < b; i += 3) {
            if (i == b - 3) {
                res = (res * k * k) % m;
            } else if (i == b - 2) {
                res = (res * k) % m;
            } else {
                res = (res * k * k * k) % m;
            }
        }
        cout << res << endl;
    }
}