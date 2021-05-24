#include <bits/stdc++.h>

using namespace std;
#define ll long long
ll a[1000001] = {0};
int main() {
    ll t;
    cin >> t;
    a[0] = 1; a[1] = 1;
    for (ll i = 2; i * i <= 1000000; i++) {
        if (a[i] == 0) {
            for (ll j = i * i; j <= 1000000; j += i)
                a[j] = 1;
        }
    }
    while(t--) {
        ll n;
        cin >> n;
        ll i;
        for (i = 1; i <= n / 2 + 1; i++) {
            if (a[i] == 0 && a[n - i] == 0) {
                cout << i << " " << n - i;
                break;
            }
        }
        if (i > n / 2) cout << -1;
        cout << endl;
    }
    return 0;
}