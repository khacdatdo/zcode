#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() { 
    ll t;
    cin >> t;
    cin.ignore();
    while (t--) {
        ll n, m;
        cin >> n >> m;
        ll a[n + 5][m + 5];
        for (ll i = 0; i <= n; i++) a[i][0] = INT_MAX;
        for (ll j = 0; j <= m; j++) a[0][j] = INT_MAX;
        for (ll i = 1; i <= n; i++)
            for (ll j = 1; j <= m; j++)
                cin >> a[i][j];
        for (ll i = 1; i <= n; i++)
            for (ll j = 1; j <= m; j++)
                if (j == 1 && i == 1) a[i][j] = a[i][j]; 
                else a[i][j] = min(a[i - 1][j], min(a[i - 1][j - 1], a[i][j - 1])) + a[i][j];
        cout << a[n][m];
        cout << endl;
    }
}