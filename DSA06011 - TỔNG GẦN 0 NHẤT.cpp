#include <bits/stdc++.h>

using namespace std;
#define ll long long
ll a[1000] = {0};
int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        for (ll i = 0; i < n; i++) cin >> a[i];
        ll res = a[0] + a[1];
        for (ll i = 0; i < n - 1; i++)
            for (ll j = i + 1; j < n; j++)
                if (abs(a[i] + a[j]) < abs(res)) {
                    res = a[i] + a[j];
                }
        cout << res;
        cout << endl;
    }
    return 0;
}