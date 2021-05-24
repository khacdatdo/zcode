#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++) cin >> a[i];
        sort (a, a + n);
        ll so1 = 0, so2 = 0;
        for (ll i = 0; i < n; i++)
            if (i % 2 == 0) so1 = so1 * 10 + a[i];
            else so2 = so2 * 10 + a[i];
        cout << so1 + so2;
        cout << endl;
    }
    return 0;
}