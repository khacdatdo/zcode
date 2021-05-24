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
        ll n, d;
        cin >> n >> d;
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        for (ll i = d; i < n; i++) cout << a[i] << " ";
        for (ll i = 0; i < d; i++) cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}