#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, k;
ll a[45];
bool nghi[45];
int main() { 
    ll t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        for (ll i = 1; i <= k; i++)
            cin >> a[i];
        for (ll i = 1; i <= n; i++) nghi[i] = false;
        ll i = k;
        while (i > 0 && a[i] == n - k + i) i--;
        if (i == 0) cout << k;
        else {
            nghi[a[i]] = true;
            a[i]++; i++;
            for (; i <= k; i++) {
                nghi[a[i]] = true;
                a[i] = a[i - 1] + 1;
                nghi[a[i]] = false;
            }
            ll res = 0;
            for (ll p = 1; p <= n; p++)
                if (nghi[p]) res++;
            cout << res;
        }
        cout << endl;
    }
}