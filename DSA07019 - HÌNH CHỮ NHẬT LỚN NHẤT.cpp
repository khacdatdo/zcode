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
        ll h[n + 2];
        for (ll i = 1; i <= n; i++) cin >> h[i];
        h[0] = 0; h[n + 1] = 0;
        ll l[n + 2], r[n + 2];
        stack <ll> st;
        for (ll i = 1; i <= n; i++) {
            while (!st.empty() && h[st.top()] >= h[i]) st.pop();
            ll ans = 0;
            if (!st.empty()) ans = st.top();
            l[i] = ans;
            st.push(i);
        }
        while (!st.empty()) st.pop();
        for (ll i = n; i >= 1; i--) {
            while (!st.empty() && h[st.top()] >= h[i]) st.pop();
            ll ans = n + 1;
            if (!st.empty()) ans = st.top();
            r[i] = ans;
            st.push(i);
        }
        ll max_hcn = 0;
        for (ll i = 1; i <= n; i++) {
            max_hcn = max(max_hcn, (r[i] - l[i] - 1) * h[i]);
        }
        cout << max_hcn;
        cout << endl;
    }
}