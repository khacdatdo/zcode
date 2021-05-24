#include <bits/stdc++.h>

using namespace std;
#define ll long long


int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        cin.ignore();
        vector <string> a;
        vector <string> b;
        string s;
        for (ll i = 0; i < n; i++) {
            cin >> s;
            a.push_back(s);
        }
        for (ll i = 0; i < n - 1; i++) {
            cin >> s;
            b.push_back(s);
        }
        b.push_back("0");
        ll l = 0, r = n - 1, res = 0;
        while (l <= r) {
            ll mid = (r + l) / 2;
            if (a[mid] == b[mid]) {
                res = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        cout << res + 2 << endl;
    }
    return 0;
}