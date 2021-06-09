#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll a[n][m], f[n][n];
        for (ll i = 0; i < n; i++)
            for (ll j = 0; j < m; j++)
                cin >> a[i][j];
        for (ll i = 0; i < n; i++)
        {
            f[i][0] = a[i][0];
        }
        for (ll i = 0; i < m; i++)
        {
            f[0][i] = a[0][i];
        }
        for (ll i = 1; i < n; i++)
            for (ll j = 1; j < m; j++)
                if (a[i][j] == 1)
                {
                    f[i][j] = min(f[i - 1][j], min(f[i][j - 1], f[i - 1][j - 1])) + 1;
                }
                else
                {
                    f[i][j] = 0;
                }
        ll max = f[0][0];
        for (ll i = 0; i < n; i++)
            for (ll j = 0; j < m; j++)
                if (f[i][j] > max)
                    max = f[i][j];
        cout << max;
        cout << endl;
    }
}