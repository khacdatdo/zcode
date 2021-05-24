#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll getMinimumSquare(ll n) {
    if (n <= 3) return n;
    ll dp[n + 1];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;
    for (ll i = 4; i <= n; i++) {
        dp[i] = i;
        for (ll x = 1; x <= ceil(sqrt(i)); x++) {
            ll temp = x * x;
            if (x * x > i) break;
            else {
                dp[i] = min(dp[i], 1 + dp[i - temp]);
            }
        }
    }
    return dp[n];
}
int main() { 
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        cout << getMinimumSquare(n);
        cout << endl;
    }
}