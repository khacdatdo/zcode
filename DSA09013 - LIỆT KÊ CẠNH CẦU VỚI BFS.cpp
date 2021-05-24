#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m;
bool chuaxet[1001];
bool loai[1001];
void BFS (vector<vector<ll>> v) {
    queue <ll> qu;
    qu.push(1);
    chuaxet[1] = false;
    while (!qu.empty()) {
        ll s = qu.front(); qu.pop();
        for (auto j : v[s]) {
            if (chuaxet[j] && (loai[s] != false || loai[j] != false)) {
                qu.push(j);
                chuaxet[j] = false;
            }
        }
    }
}
void duyetcau(vector<vector<ll>> v) {
    for (ll i = 1; i <= n; i++) {
        for (auto j : v[i]) {
            if (j > i) {
                loai[i] = false; loai[j] = false;
                BFS(v);
                for(ll p = 1; p <= n; p++)
                    if (chuaxet[p]) {
                        cout << i << " " << j << " ";
                        break;
                    }
                loai[i] = true; loai[j] = true;
                memset(chuaxet, true, sizeof chuaxet);
            }
        }
    }
}
int main() {  
    ll t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        vector <vector<ll>> v(n + 1);
        ll s, t;
        for (ll i = 0; i < m; i++) {
            cin >> s;
            cin >> t;
            v[s].push_back(t);
            v[t].push_back(s);
        }
        memset(chuaxet, true, sizeof chuaxet);
        memset(loai, true, sizeof loai);
        duyetcau(v);
        cout << endl;
    }
}