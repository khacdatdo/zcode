#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n;
        vector <ll> a;
        for (ll i = 0; i < n; i++) {
            cin >> m;
            a.push_back(m);
        }
        sort(a.begin(), a.end());
        ll max = 0;
        for (ll i = 0; i < n; i++) {
            ll tmp = (a[i] * i) % 1000000007;
            max = (max + tmp) % 1000000007;
        }
        cout << max;
        cout << endl;
    }
    return 0;
}