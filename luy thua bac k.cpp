#include<bits/stdc++.h>
#define MOD 1000000007

using namespace std;

double solution(double n, double k) {
    double result = 0;
    for (long long i = 1; i <= n; i++) {
        result = (long long) result % MOD + (long long) (pow(i, k)) % MOD;
    }
    return result;
}

main() {
    int t;
    cin >> t;
    while (t--) {
        double n, k;
        cin >> n >> k;
        cout << solution(n, k) << endl;
    }
}