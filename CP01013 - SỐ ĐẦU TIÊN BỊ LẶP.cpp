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
        ll count = 0;
        for (ll i = 0; i < n - 1; i++) {
            
            for (ll j = i + 1; j < n; j++)
                if(a[j] == a[i]) count++;
            if (count != 0) {
                cout << a[i];
                break;
            }
        }
        if (count == 0) cout << "NO";
        cout << endl;
    }
    return 0;
}