#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() { 
    ll t;
    cin >> t;
    while (t--) {
        ll n, v;
    cin >> n >> v;
    ll a[n + 1], c[n + 1];
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    for (ll i = 1; i <= n; i++)
        cin >> c[i];
    ll f[v + 1];
    memset(f, 0, sizeof f);
    for (ll i = 1; i <= n; i++)
        for (ll j = v; j >= a[i]; j--)
            f[j] = max(f[j], f[j - a[i]] + c[i]);
    cout << f[v] << endl;
    }
}