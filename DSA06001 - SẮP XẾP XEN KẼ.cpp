#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll a[n] = {0};
        for (ll i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        ll l = 0, r = n - 1;
        for (ll i = 0; i < n; i++) 
            if (i % 2 == 0)
            {
                cout << a[r--] << " ";
            }
            else {
                cout << a[l++] << " ";
            }
        cout << endl;
    }
    return 0;
}