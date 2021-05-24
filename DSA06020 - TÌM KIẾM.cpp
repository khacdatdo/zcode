#include <bits/stdc++.h>

using namespace std;
#define ll long long
ll a[1000000] = {0};
int BinarySearch(ll l, ll r, ll x) {
    while (l <= r) {
        ll mid = (l + r) / 2;
        if (a[mid] == x) return 1;
        if (a[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return - 1;
}
int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n, x;
        cin >> n >> x;
        for (ll i = 0; i < n; i++) cin >> a[i];
        cout << BinarySearch(0, n - 1, x);
        cout << endl;
    }
    return 0;
}