#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        string s;
        set<char> set1;
        for (ll i = 1; i <= n; i++) {
            cin >> s;
            ll j = 0;
            while (j < s.length()) {
                set1.insert(s[j]);
                j++;
            }
        }
        for (set<char> :: iterator it = set1.begin(); it != set1.end(); it++) 
            cout << *it << " ";
        cout << endl;
    }
    return 0;
}