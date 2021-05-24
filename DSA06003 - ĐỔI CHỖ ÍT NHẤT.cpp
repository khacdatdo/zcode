#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, res = 0;
        cin  >> n;
        ll a[n];
        for (ll i = 0; i < n; i++) cin >> a[i];
        for (ll i = 0; i < n - 1; i++) {
            ll min = i;
            for (ll j = i + 1; j < n; j++)
                if (a[j] < a[min]) min = j;
            if (min != i) {
                swap(a[i], a[min]);
                res++;
            }
        }
        cout << res << endl;
    }    
    return 0;
}