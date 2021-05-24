#include <bits/stdc++.h>

using namespace std;
#define ll long long


int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, m, u, v;
        cin >> n >> m;
        vector <vector <ll>> List(n);
        for (ll i = 1; i <= m; i++) {
            cin >> u >> v;
            List[u - 1].push_back(v);
        }
        ll k = 1;
        for (auto i : List) {
            cout << k << ": ";
            k++;
            for (auto j : i) cout << j << " ";
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}