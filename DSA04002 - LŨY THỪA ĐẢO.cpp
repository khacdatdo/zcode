#include <bits/stdc++.h>

using namespace std;
#define ll long long
ll Dao(ll n) {
    ll r = 0;
    while (n > 0) {
        r = r * 10 + n % 10;
        n /= 10;
    }
    return r;
}
ll Tinh(ll n, ll k) {
    if (k == 1) return n;
    ll tmp = Tinh(n, k / 2) % 1000000007;
    if (k % 2 == 0) return (tmp * tmp) % 1000000007;
    else return (((tmp * tmp) % 1000000007) * n) % 1000000007;
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll r = Dao(n);
        cout << Tinh(n , r);
        cout << endl;
    }
    return 0;
}