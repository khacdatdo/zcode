#include<iostream>
#include<bits/stdc++.h>

using namespace std;

main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, x, y;
        cin >> a >> x >> y;
        for (int i = 0; i < __gcd(x, y); i++) {
            cout << a;
        }
        cout << endl;
    }
}