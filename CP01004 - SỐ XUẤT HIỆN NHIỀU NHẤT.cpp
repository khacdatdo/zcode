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
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        ll i = 0, res, stop = 0;
        while (i < n) {
            res = a[i];
            ll j = 1;
            while (a[++i] == res) j++;
            if (j > n/2) {
                stop = 1;
                break;
            }
        }
        if (stop == 1) cout << res;
        else cout << "NO";
        cout << endl;
    }
    return 0;
}