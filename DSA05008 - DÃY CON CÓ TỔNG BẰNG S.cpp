#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n, s;
        cin >> n >> s;
        ll l[s + 1] = {0};
        ll a;
        l[s] = 0; l[0] = 1;
        for (ll i = 1; i <= n; i++) {
            cin >> a;
            for (ll t = s; t >= a; t--)
                if (l[t] == 0 && l[t - a] == 1) l[t] = 1;
        }
        if (l[s] == 1) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}