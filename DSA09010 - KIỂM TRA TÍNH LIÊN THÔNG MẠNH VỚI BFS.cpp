#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m;
ll chuaxet[1001];
vector <vector <ll>> v(1001);
void BFS(ll k) {
    queue <ll> qu;
    qu.push(k);
    chuaxet[k] = 0;
    while (!qu.empty()) {
        ll s = qu.front(); qu.pop();
        for (auto j : v[s]) {
            if (chuaxet[j]) {
                chuaxet[j] = 0;
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
        for (ll i = 1; i <= n; i++)
            v[i].clear();
        ll s, t;
        for (ll i = 0; i < m; i++) {
            cin >> s;
            cin >> t;
            v[s].push_back(t);
        }
        memset(chuaxet, 1, sizeof chuaxet);
        BFS(1);
        bool check = true;
        for (ll i = 1; i <= n; i++)
            if (chuaxet[i]) {
                check = false;
                break;
            }
        if (check) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}