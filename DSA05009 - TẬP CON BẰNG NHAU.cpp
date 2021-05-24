#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[100] = {0}, dem ;
void Try(ll sum, ll k, ll i, ll n) {
    for (ll j = 1; j >= 0; j--) {
        k += j * a[i];
        if (k == sum - k) {
            dem++;
            return;
        }
        else if (i == n - 1 || dem != 0 || k > sum - k) return;
        else Try(sum, k, i + 1, n);
        k -= j * a[i];
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, sum = 0;
        cin >> n;
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        dem = 0;
        if (sum % 2 == 0) Try (sum, 0, 0, n);
        if (dem > 0) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}