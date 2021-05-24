#include <bits/stdc++.h>

using namespace std;
#define ll long long


int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, m, u, v, k;
        cin >> n >> m >> k;
        vector <vector <ll>> List(n);
        for (ll i = 1; i <= m; i++) {
            cin >> u >> v;
            List[u - 1].push_back(v - 1);
            List[v - 1].push_back(u - 1);
        }
        bool chuaxet[n];
        for (ll i = 0; i < n; i++) chuaxet[i] = true;
        cout << k << " ";
        chuaxet[k - 1] = false;
        stack <ll> st;
        st.push(k - 1);
        while (!st.empty()) {
            ll s = st.top();
            st.pop();
            auto i = List[s];
            for (auto j : i) 
                if (chuaxet[j]) {
                    chuaxet[j] = false;
                    cout << j + 1 << " ";
                    st.push(s);
                    st.push(j);
                    break;
                }
        }
        cout << endl;
    }
    return 0;
}