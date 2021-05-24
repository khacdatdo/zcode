#include <bits/stdc++.h>

using namespace std;
#define ll long long
ll n = 0, a[11] = {0};
ll P(ll i, ll k) {
    if (k == n - 1) return a[i] + a[i + 1];
    return P(i, k + 1) + P(i + 1, k + 1);
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (ll i = 0; i < n; i++) cin >> a[i];
        for (ll i = 0; i < n - 1; i++) {
            cout << "[";
            for (ll j = 0; j <= i; j++) {
                int tmp = P(j, i + 1);
                if (j == i) cout << tmp << "]" << " ";
                else cout << tmp << " ";
            }
        }
        cout << "[";
        for (ll i = 0; i < n; i++)
            if (i == n - 1) cout << a[i] << "]";
            else cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}