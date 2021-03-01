#include<iostream>
#include<bits/stdc++.h>

using namespace std;

main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long mang[n*n + 1];
        for (int i = 0; i < n*n; i++) {
            cin >> mang[i];
        }
        sort(&mang[0], &mang[n*n - 1]);
        cout << mang[k - 1] << endl;
    }
}