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
        ll tmax[n];
        tmax[n - 1] = a[n - 1];
        for (ll i = n - 2; i >=0; i--) {
            tmax[i] = tmax[i + 1];
            if(tmax[i] < a[i]) tmax[i] = a[i];
        }
        set<ll> se;
        for (ll i = 0; i < n; i++)
            se.insert(tmax[i]);
        for (set<ll>::reverse_iterator i = se.rbegin(); i != se.rend(); i++)
            cout << *i << " ";
        cout << endl;
    }
    return 0;
}