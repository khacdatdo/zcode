#include <bits/stdc++.h>

using namespace std;
#define ll long long


int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll a[n] = {0}, f[n] = {0};
        cin >> a[0]; f[0] = a[0];
        for (ll i = 1; i < n; i++) {
            cin >> a[i];
            f[i] = f[i - 1] + a[i];
        }
        ll f_min = 0, max_sum = 0;
        for (ll i = 0; i < n; i++) {
            f_min = min(f_min, f[i]);
            max_sum = max(max_sum, f[i] - f_min);
        }
        cout << max_sum;
        cout << endl;
    }
    return 0;
}