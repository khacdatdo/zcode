#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m;
vector <vector<ll>> v(1001);
void DFS(ll u) {
    ll chuaxet[1001];
    memset(chuaxet, 1, sizeof chuaxet);
    stack <ll> st;
    st.push(u);
    chuaxet[u] = 0;
    cout << u << " ";
    while (!st.empty()) {
        ll s = st.top(); st.pop();
        for (ll j = 0; j < v[s].size(); j++) {
            if (chuaxet[v[s][j]]) {
                cout << v[s][j] << " ";
                chuaxet[v[s][j]] = 0;
                st.push(s);
                st.push(v[s][j]);
                break;
            }
        }
    }
}
int main() {  
    ll t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        ll u, s, t;
        cin >>  u;
        for (ll i = 1; i <= n; i++)
            v[i].clear();
        for (ll i = 1; i <= m; i++) {
            cin >> s >> t;
            v[s].push_back(t);
        }
        DFS(u);
        cout << endl;
    }
}