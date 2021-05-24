#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() { 
    ll t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        cin >> s;
        if (s[0] == '0') cout << 0;
        else {
            ll n = s.length();
            ll f[n + 1] = {0};
            f[0] = 1; f[1] = 1;
            for (ll i = 2; i <= n; i++) {
                if (s[i - 1] > '0' && s[i - 1] <= '9') f[i] = f[i - 1];
                ll tmp = (s[i - 2] - '0') * 10 + s[i - 1] - '0';
                if (tmp > 9 && tmp < 27) f[i] += f[i - 2];
                else if (s[i - 1] == '0') {
                    f[n] = 0;
                    break;
                }
            }
            cout << f[n];
        }
        cout << endl;
    }
}