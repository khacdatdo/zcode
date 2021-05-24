#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n , k, res;
ll a[1005], chon[1005], kq[1000];
bool check() {
    ll t = 0;
    for (ll i = 0; i < n; i++)
        if (chon[i]) kq[t++] = a[i];
    if (t != k) return false;
    else {
        for (ll p = 0; p < t - 1; p++)
            if (kq[p] > kq[p + 1]) return false;
    }
    return true;
}
void Try(ll i) {
    for (ll j = 1; j >= 0; j--) {
        chon[i] = j;
        if (i == n - 1) {
            if (check()) res++;
        } else Try(i + 1);
    }
}
int main() {  
    cin >> n >> k;
    for (ll i = 0; i < n; i++) cin >> a[i];
    res = 0;
    Try(0);
    cout << res;
}