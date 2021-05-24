#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n, x, val;
        cin >> n >> x;
        ll index  = 0;
        for (ll i = 1; i <= n; i++) {
            cin >> val;
            if (val == x) index = i;
        }
        cout << index;
        cout << endl;
    }
    return 0;
}