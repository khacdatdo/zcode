#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, k;
ll a[20];
void Try(ll i) {
    for (ll j = a[i - 1] + 1; j <= n - k + i; j++) {
        a[i] = j;
        if (i == k) {
            for (ll p = 1; p <= k; p++)
                cout << (char)(a[p] + '@');
            cout << endl;
        } else Try(i + 1);
    }   
}
int main() { 
    ll t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        a[0] = 0;
        Try(1);
    }
}