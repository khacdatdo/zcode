#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll Tinh(ll n, ll k) {
    if (k == pow(2, n) - 1 || k == 1) return 1;
    ll tmp = pow(2, n - 1);
    if (k == tmp) return n;
    if (k < tmp) return Tinh(n - 1, k);
    return Tinh(n - 1, k - tmp);
    
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        cout << Tinh(n , k);
        cout << endl;
    }
    return 0;
}