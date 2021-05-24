#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m;
ll par[1001];
struct Edge {
    ll a;
    ll b;
};
vector <Edge> e;
ll getRoot(ll v) {
    return par[v] < 0 
            ? v
            : (par[v] = getRoot(par[v]));
}

int main() {  
    ll t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        for (ll i = 1; i <= n; i++)
            par[i] = -1;
        ll s, t;
        e.clear();
        bool check = false;
        for (ll i = 0; i < m; i++) {
            cin >> s;
            cin >> t;
            e.push_back(Edge());
            e.back().a = s;
            e.back().b = t;
        }
        for (ll i = 0; i < m; i++) {
            ll x = getRoot(e[i].a);
            ll y = getRoot(e[i].b);
            if (x == y) {
                check = true;
                break;
            }
            if (par[y] < par[x]) swap(x, y);
            par[x] += par[y];
            par[y] = x;
        }
        if (check) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}