#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() { 
    ll t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        ll f[n + 1][m + 1];
        for (ll i = 0; i <= m; i++) f[n][i] = 1;
        for (ll i = 0; i <= n; i++) f[i][m] = 1;
        for (ll i = n - 1; i >= 0; i--)
            for (ll j = m - 1; j >= 0; j--)
                f[i][j] = f[i + 1][j] + f[i][j + 1];
        cout << f[0][0];
        cout << endl;
    }
}