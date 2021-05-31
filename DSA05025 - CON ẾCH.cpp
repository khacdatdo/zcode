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
        ll dp[n + 1] = {0};
        dp[0] = 1;
        dp[1] = 1;
        for (ll i = 2; i <= n; i++)
            for (ll j = 1; j <= min((ll)3, i); j++)
                dp[i] += dp[i - j];
        cout << dp[n];
        cout << endl;
    }
    return 0;
}