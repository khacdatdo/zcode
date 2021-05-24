#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m;
ll chuaxet[1001];
void BFS(vector<vector<ll>> v, ll k) {
    queue <ll> qu;
    qu.push(k);
    chuaxet[k] = -1;
    while (!qu.empty()) {
        ll s = qu.front(); qu.pop();
        for (auto j : v[s]) {
            if (chuaxet[j] == 0) {
                chuaxet[j] = s;
                qu.push(j);
            }
        }
    }
}
int main() {  
    ll t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        ll k, dich;
        cin >> k >> dich;
        vector <vector<ll>> v(n + 1);
        ll s, t;
        for (ll i = 0; i < m; i++) {
            cin >> s;
            cin >> t;
            v[s].push_back(t);
            v[t].push_back(s);
        }
        memset(chuaxet, 0, sizeof chuaxet);
        BFS(v, k);
        if (chuaxet[dich] !=  0) {
            string res = "";
            while (dich != k) {
                res = to_string(dich) +  " " + res;
                dich = chuaxet[dich];
            }
            res = to_string(dich) + " " + res;
            cout << res;
        } else cout << -1;
        cout << endl;
    }
}