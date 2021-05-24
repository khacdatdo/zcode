#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() { 
    ll t;
    cin >> t;
    while (t--) {
        ll n1; 
        cin >> n1;
        ll root1[1001];
        memset(root1, 0, sizeof root1);
        for (ll i = 1; i <= n1; i++) {
            ll u, v;
            char x;
            cin >> u >> v >> x;
            ll j = 1;
            if (root1[j] == 0) root1[j] = u;
            else {
                for (; j < 1001; j++)
                    if (root1[j] == u) break;
            }
            if (x == 'L') root1[2 * j] = v;
            else root1[2 * j + 1] = v;
        }
        ll n2;
        cin >> n2;
        ll root2[1001];
        memset(root2, 0, sizeof root2);
        for (ll i = 1; i <= n2; i++) {
            ll u, v;
            char x;
            cin >> u >> v >> x;
            ll j = 1;
            if (root2[j] == 0) root2[j] = u;
            else {
                for (; j < 1001; j++)
                    if (root2[j] == u) break;
            }
            if (x == 'L') root2[2 * j] = v;
            else root2[2 * j + 1] = v;
        }
        ll check = true;
        for (ll i = 1; i < 1001; i++)
            if (root1[i] != root2[i]) {
                check = false;
                break;
            }
       
        if (check) cout << 1;
        else cout << 0;
        cout << endl;
    }
}