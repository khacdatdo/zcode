#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() { 
    ll c, n;
    cin >> c >> n;
    ll w[n + 1];
    for (ll i = 1; i <= n; i++)
        cin >> w[i];
    ll f[c + 1];
    memset(f, 0, sizeof f);
    for (ll i = 1; i <= n; i++)
        for (ll j = c; j >= w[i]; j--)
            f[j] = max(f[j], f[j - w[i]] + w[i]);
    cout << f[c];
}