#include<bits/stdc++.h>
#include<iostream>
#define MOD 1000000007

using namespace std;

bool sortFunction(int a, int b) {
    return a < b;
}

main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long mang[n + 1];
        for (long long i = 0; i < n; i++) {
            cin >> mang[i];
        }
        sort(&mang[0], &mang[n], sortFunction);
        long long tong = 0;
        for (long long i = 0; i < n; i++) {
            tong += (mang[i] * i) % MOD;
        }
        cout << tong % MOD << endl;
    }
}