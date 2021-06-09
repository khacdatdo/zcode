#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
int main()
{

    cin >> n;
    ll a[n + 5][n + 5];
    vector<vector<ll>> v(n + 1);
    for (ll i = 1; i <= n; i++)
        for (ll j = 1; j <= n; j++)
            cin >> a[i][j];
    for (ll i = 1; i <= n; i++)
        for (ll j = i; j <= n; j++)
            if (a[i][j])
            {
                v[i].push_back(j);
                v[j].push_back(i);
            }
    for (ll i = 1; i <= n; i++)
    {
        for (auto j : v[i])
            cout << j << " ";
        cout << endl;
    }
}