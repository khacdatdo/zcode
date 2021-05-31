#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cin.ignore();
        string s;
        cin >> s;
        ll dp[n + 1][n + 1] = {0};
        memset(dp, 0, sizeof dp);
        for (ll i = 1; i <= n; i++)
            for (ll j = 1; j <= n; j++)
            {
                if (s[i - 1] == s[j - 1] && i != j)
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        cout << dp[n][n];
        cout << endl;
    }
}