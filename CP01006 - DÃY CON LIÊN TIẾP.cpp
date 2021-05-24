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
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        ll f[n];
        f[0] = a[0];
        for (ll i = 1; i < n; i++)
            f[i] = f[i - 1] + a[i];
        ll f_min = 0, maxsum = f[1] - f[0]; 
        for (ll i = 0; i < n; i++) {
            f_min = min(f_min, f[i]);
            maxsum = max(maxsum, f[i] - f_min);
        }
        cout << maxsum;
        cout << endl;
    }
    return 0;
}