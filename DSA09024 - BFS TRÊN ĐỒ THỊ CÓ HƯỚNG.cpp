#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m;
vector <vector<ll>> v(1001);
void BFS(ll u) {
    ll chuaxet[1001];
    memset(chuaxet, 1, sizeof chuaxet);
    queue <ll> qu;
    qu.push(u);
    chuaxet[u] = 0;
    cout << u << " ";
    while (!qu.empty()) {
        ll s = qu.front(); qu.pop();
        for (ll j = 0; j < v[s].size(); j++) {
            if (chuaxet[v[s][j]]) {
                cout << v[s][j] << " ";
                chuaxet[v[s][j]] = 0;
                qu.push(v[s][j]);
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
        BFS(u);
        cout << endl;
    }
}