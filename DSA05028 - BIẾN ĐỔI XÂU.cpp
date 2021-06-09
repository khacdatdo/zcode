#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string str1, str2;
        cin >> str1 >> str2;
        ll n = str1.length(), m = str2.length();
        ll f[n + 1][m + 1];
        for (ll i = 0; i <= n; i++)
            f[i][0] = i;
        for (ll i = 0; i <= m; i++)
            f[0][i] = i;
        for (ll i = 1; i <= n; i++)
            for (ll j = 1; j <= m; j++)
                if (str1[i - 1] == str2[j - 1])
                    f[i][j] = f[i - 1][j - 1];
                else
                {
                    f[i][j] = min(f[i - 1][j], min(f[i][j - 1], f[i - 1][j - 1])) + 1;
                }
        cout << f[n][m];
        cout << endl;
    }
}