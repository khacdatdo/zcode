#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t; 
    cin >> t;
    while (t--) {
        ll n, res;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        res = a[1] - a[0];
        for (ll i = 2; i < n; i++)
            if (a[i] - a[i - 1] < res) res = a[i] - a[i - 1];
        cout << res;
        cout << endl;
    }
    return 0;
}