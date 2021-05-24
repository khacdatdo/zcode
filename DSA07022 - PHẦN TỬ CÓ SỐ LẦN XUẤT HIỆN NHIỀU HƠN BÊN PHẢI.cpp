#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {  
    ll t;
    cin >> t;
    cin.ignore();
    while (t--) {
        ll n;
        cin >> n;
        ll a[n], xh[n];
        map <ll, ll> m;
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            m[a[i]]++;
        }
        for (ll i = 0; i < n; i++) 
            xh[i] = m[a[i]];
        ll res[n];
        stack <ll> st;

        for (ll i = n - 1; i >= 0; i--) {
            while (!st.empty() && xh[st.top()] <= xh[i]) st.pop();
            ll ans = -1;
            if (!st.empty()) ans = st.top();
            res[i] = ans;
            st.push(i);
        }
        for (ll i = 0; i < n; i++) {
            if(res[i] != -1) cout << a[res[i]];
            else cout << -1;
            cout << " ";
        }
        cout << endl;
    }
}