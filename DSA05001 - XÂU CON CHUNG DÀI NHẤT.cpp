#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        string s1, s2;
        cin >> s1 >> s2;
        ll m = s1.length(), n = s2.length();
        ll l[m + 1][n + 1] = {0};
        for (ll i = 0; i <= m; i++) l[i][0] = 0;
        for (ll i = 0; i <= n; i++) l[0][i] = 0;
        for (ll i = 0; i < m; i++)
            for (ll j = 0; j < n; j++)
                if (s1[i] == s2[j]) l[i + 1][j + 1] = l[i][j] + 1;
                else l[i + 1][j + 1] = max(l[i][j + 1], l[i + 1][j]);
        cout << l[m][n];
        cout << endl;
    }
    return 0;
}