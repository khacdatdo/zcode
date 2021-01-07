#include<bits/stdc++.h>

using namespace std;

long long sodu(long long n, long long k) {
    if (n < k) return n;
    return n % k;
}

main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k, tong = 0;
        cin >> n >> k;
        for (int i = 1; i <= n; i++) {
            tong += sodu(i, k);
        }
        if (tong == k) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
}