#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t; 
    cin >> t;
    while (t--) {
        ll n, res = -1;
        cin >> n;
        ll a[n] , f[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        f[0] = a[0];
        for(ll i = 1; i < n; i++)
            f[i] = f[i - 1] + a[i];
        for (ll i = 1; i < n - 1; i++)
            if (f[i - 1] == f[n - 1] - f[i]) res = i + 1;
        cout << res;
        cout << endl;
    }
    return 0;
}