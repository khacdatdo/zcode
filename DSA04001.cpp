#include<bits/stdc++.h>
#define MOD 1000000007

using namespace std;

long long power(long long n, long long k) {
    if (k == 0) return 1;
    long long temp = power(n, k / 2) % MOD;
    if (k % 2 == 0)
        return (temp * temp) % MOD;
    else
        return ((n * temp) % MOD * temp) % MOD;
}

main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        cout << power(n, k) << endl;
    }
}