#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n , k;
ll a[1005];
int main() {  
    ll t;
    cin >> t;
    a[0] = 0;
    while (t--) {
        cin >> n >> k;
        for (ll i = 1; i <= k; i++) cin >> a[i];
        ll i = k;
        while (i > 0 && a[i] == a[i - 1] + 1) i--;
        if (i == 0) {
            for (ll p = 1; p <= k; p++) cout << n - k + p << " ";
        } else {
            a[i]--;
            i++;
            while (i <= k) {
                a[i] = n - k + i;
                i++;
            }
            for (ll p = 1; p <= k; p++) cout << a[p] << " ";
        }
        cout << endl;
    }
}