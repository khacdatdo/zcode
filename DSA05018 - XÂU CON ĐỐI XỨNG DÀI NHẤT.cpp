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
        s = " " + s;
        ll n = s.length();
        bool f[n + 5][n + 5];
        memset(f, 0, sizeof f);
        for (ll i = 1; i <= n; i++) f[i][i] = true;
        for (ll i = 1; i <= n - 1; i++) f[i + 1][i] = true;
        ll max = 0;
        for (ll k = 1; k <= n - 1; k++)
            for (ll i = 1; i <= n - k; i++) {
                ll j = i + k;
                f[i][j] = f[i + 1][j - 1] && s[i] == s[j];
                if (f[i][j]) max = k;
            }
        cout << max + 1;
        cout << endl;
    }
}