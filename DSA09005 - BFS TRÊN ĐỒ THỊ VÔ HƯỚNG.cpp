#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m;
ll chuaxet[1001];
void BFS(vector<vector<ll>> v, ll k) {
    queue <ll> qu;
    qu.push(k);
    chuaxet[k] = false;
    while (!qu.empty()) {
        ll s = qu.front(); qu.pop();
        cout << s << " ";
        for (auto j : v[s]) {
            if (chuaxet[j]) {
                qu.push(j);
                chuaxet[j] = 0;
            }
        }
    }
}
int main() {  
    ll t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        ll k;
        cin >> k;
        vector <vector<ll>> v(n + 1);
        ll s, t;
        for (ll i = 0; i < m; i++) {
            cin >> s;
            cin >> t;
            v[s].push_back(t);
            v[t].push_back(s);
        }
        memset(chuaxet, 1, sizeof chuaxet);
        BFS(v, k);
        for (ll i = 1; i <= n; i++) {
            if (chuaxet[i]) BFS(v, i);
        }
        cout << endl;
    }
}