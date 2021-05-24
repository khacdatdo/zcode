#include <bits/stdc++.h>

using namespace std;
#define ll long long
ll a[100000] = {0}, b[1000000] = {0};
int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n, m;
        cin >> n >> m;
        for (ll i = 0; i < n; i++) cin >> a[i];
        for (ll i = 0; i < m; i++) cin >> b[i];
        sort(a, a + n);
        sort(b, b + m);
        cout << a[n - 1] * b[0];
        cout << endl;
    }
    return 0;
}