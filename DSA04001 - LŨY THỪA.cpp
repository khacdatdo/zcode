#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll Tinh(ll n, ll k) {
    if (k == 0) return 1;
    else {
        ll tmp = Tinh(n , k / 2);
        tmp %= 1000000007;
        if (k % 2 == 0) return (tmp * tmp) % 1000000007;
        else return (((tmp * tmp) % 1000000007) * n) % 1000000007;
    }
}
int main() {
    ll t;
    cin >> t;
    while (t > 0) {
        ll n = 0, k = 0;
        cin >> n >> k;
        if (n >= 1 && n <= 1000 && k >= 1 && k <= 1000000000)  cout << Tinh(n, k);
        else cout << 0;
        cout << endl;
        t--;
    }
    return 0;
}