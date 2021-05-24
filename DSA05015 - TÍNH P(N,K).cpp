#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll f[1001][1001];
ll p(ll n, ll k) {
    if (k > n) return 0;
    else {
        if (f[k][n]) return f[k][n];
        else f[k][n] = (n * p(n - 1, k - 1)) % 1000000007;
    }
    return f[k][n];
}
int main() { 
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        memset(f, 0, sizeof f);
        for (ll i = 0; i <= n; i++) f[0][i] = 1;
        cout << p(n, k);
        cout << endl;
    }
}