#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll Tinh(ll n, ll k) {
    if (k == 1) return n;
    else {
        ll tmp = Tinh(n, k / 2) % 123456789;
        if (k % 2 == 0) return (tmp * tmp) % 123456789;
        else return (((tmp * tmp) % 123456789) * n) % 123456789;
    }
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        cout << Tinh(2 , n - 1);
        cout << endl;
    }
    return 0;
}