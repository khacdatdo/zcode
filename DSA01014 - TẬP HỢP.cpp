#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, k, s, res;
ll a[20];
void Try(ll i) {
    for (ll j = a[i - 1] + 1; j <= n - k + i; j++) {
        a[i] = j;
        if (i == k) {
            ll tong = 0;
            for (ll p = 1; p <= k; p++)
                tong += a[p];
            if (tong == s) res++;
        } else Try(i + 1);
    }
}
int main() {  
    while (1) {
        cin >> n >> k >> s;
        if (n == 0 && k == 0 && s == 0) break;
        a[0] = 0;
        res = 0;
        Try(1);
        cout << res << endl;
    }
}