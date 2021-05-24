#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() { 
    ll t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        cin >> s;
        ll n = s.length();
        s = " " + s;
        ll f[n + 1][n + 1];
        for (ll i = 1; i <= n; i++) f[i][i] = 0;
        for (ll i = 1; i < n; i++) f[i + 1][i] = 0;
        for (ll k = 1; k < n; k++)
            for (ll i = 1; i <= n - k; i++) {
                ll j = i + k;
                if (s[i] == s[j]) f[i][j] = f[i + 1][j - 1];
                else {
                    f[i][j] = min(f[i + 1][j], f[i][j - 1]) + 1;
                }
            }
        cout << f[1][n];
        cout << endl;
    }
}