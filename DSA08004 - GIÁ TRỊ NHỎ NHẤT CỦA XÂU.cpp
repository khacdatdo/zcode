#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(string a, string b) {
    if (a > b) return false;
    return true;

}
int main() {  
    ll t;
    cin >> t;
    cin.ignore();
    while (t--) {
        ll k;
        cin >> k;
        cin.ignore();
        string s;
        cin >> s;
        ll dem[300];
        memset(dem, 0, sizeof dem);
        for (auto i : s) dem[i]++;
        priority_queue <ll> qu;
        for (ll i = 0; i < 300; i++)
            if (dem[i] > 0) qu.push(dem[i]);
        while(k > 0 && !qu.empty()) {
            k--;
            ll t = qu.top(); qu.pop();
            t--;
            qu.push(t);
        }
        ll res = 0;
        while (!qu.empty()) {
            ll t = qu.top(); qu.pop();
            res += t * t;
        }
        cout << res;    
        cout << endl;
    }
}