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
        ll a[n + 5];
        for (ll i = 0; i < n; i++) cin >> a[i];
        stack <ll> st;
        vector <ll> res;
        st.push(0);
        res.push_back(1);
        for (ll i = 1; i < n; i++) {
            while (!st.empty() && a[st.top()] <= a[i]) st.pop();
            ll tmp = (st.empty()) ? (i + 1) : (i - st.top());
            res.push_back(tmp);
            st.push(i);
            
        }
        for (auto it : res) cout << it << " ";
        cout << endl;
    }
}