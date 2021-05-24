#include <bits/stdc++.h>
using namespace std;

#define ll long long

void BFS(ll u, ll n, ll chuaxet[], vector <vector <ll>> v, bool &cycle) {
    queue <ll> qu;
    qu.push(u);
    chuaxet[u] = 1;
    while (!qu.empty()) {
        ll s = qu.front();
        qu.pop();
        for (ll i = 0; i < v[s].size(); i++)
            if (chuaxet[v[s][i]] == 0) {
                chuaxet[v[s][i]] = 1;
                qu.push(v[s][i]);
            } else if (chuaxet[v[s][i]] == 1) cycle = true;
        chuaxet[s] = 2;
    }
}


    


int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, m, u, k;
        bool cycle = false;
        cin >> n >> m;
        vector <vector <ll>> v(n + 1);
        for (ll i = 1; i <= m; i++) {
            cin >> u >> k;
            v[u].push_back(k);
            v[k].push_back(u);
        }
        ll chuaxet[n + 1];
        memset(chuaxet, 0, sizeof chuaxet);
        for (ll i = 1; i <= n; i++) {
            if (chuaxet[i] != 2)
                BFS(i, n, chuaxet, v, cycle);
        }
        if (cycle == true) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}