#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m;
vector <vector<ll>> v(1001);
ll chuaxet[1001];
ll x[1001];
bool check;
void Hmt(ll i) {
    for (ll j = 0; j < v[x[i - 1]].size(); j++) {
        if (check == false && chuaxet[v[x[i-1]][j]]) {
            if (i == n) check = true;
            else {
                chuaxet[v[x[i-1]][j]] = 0;
                x[i] = v[x[i - 1]][j];
                Hmt(i + 1);
                chuaxet[v[x[i-1]][j]] = 1;
            }
        }
        // if (i == n && chuaxet[v[x[i - 1]][j]]) {
        //     check = true;
        // } else if (chuaxet[v[x[i - 1]][j]] && check == false) {
        //     x[i] = v[x[i - 1]][j];
        //     chuaxet[v[x[i - 1]][j]] = 0;
        //     Hmt(i + 1);
        //     chuaxet[v[x[i - 1]][j]] = 1;
        // }
    }
}
int main() {  
    ll t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        ll s, t;
        for (ll i = 1; i <= n; i++)
            v[i].clear();
        for (ll i = 1; i <= m; i++) {
            cin >> s >> t;
            v[s].push_back(t);
            v[t].push_back(s);
        }
        check = false;
        for (ll i = 1; i <= n; i++) {
            x[1] = i;
            memset(chuaxet, 1, sizeof chuaxet);
            chuaxet[i] = 0;
            Hmt(2);
        }
        if (check) cout << 1;
        else cout << 0; 
        cout << endl;
    }
}