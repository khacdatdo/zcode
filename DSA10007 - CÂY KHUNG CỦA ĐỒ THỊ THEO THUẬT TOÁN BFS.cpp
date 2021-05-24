#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m;
bool chuaxet[1001];
vector <vector<ll>> v(1001);
struct Edge {
   ll u;
   ll v;
};
vector <Edge> res;
void DFS(ll u) {
    queue <ll> qu;
    qu.push(u);
    chuaxet[u] = false;
    while(!qu.empty()) {
       ll s = qu.front(); qu.pop();
       for(ll j = 0; j < v[s].size(); j++)
          if(chuaxet[v[s][j]]) {
             chuaxet[v[s][j]] = false;
             res.push_back(Edge());
             res.back().u = s;
             res.back().v = v[s][j];
             qu.push(v[s][j]);
          }
    }
    if (res.size() != n - 1) cout << -1 << endl;
    else {
       for(auto it : res) 
          cout << it.u << " " << it.v << endl;
    }
} 
int main() {
	ll t;
    cin >> t;
    while (t--) {
       ll u;
       cin >> n >> m >> u;
       for (ll i = 1; i <= n; i++)
           v[i].clear();
       res.clear();
       ll s, t;
       for (ll i = 0; i < m; i++) {
           cin >> s;
           cin >> t;
           v[s].push_back(t);
           v[t].push_back(s);
       }
       memset(chuaxet, true, sizeof chuaxet);
       DFS(u);
    }
	return 0;
}