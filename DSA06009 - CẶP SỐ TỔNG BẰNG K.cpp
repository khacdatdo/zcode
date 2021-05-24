#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n, k, dem = 0;
        cin >> n >> k;
        ll a[n] = {0};
        for (ll i = 0; i < n; i++) cin >> a[i];
        for (ll i = 0; i < n - 1; i++)
            for (ll j = i + 1; j < n; j++)
                if(a[i] + a[j] == k) dem++;
        cout << dem;
        cout << endl;
    }
    return 0;
}