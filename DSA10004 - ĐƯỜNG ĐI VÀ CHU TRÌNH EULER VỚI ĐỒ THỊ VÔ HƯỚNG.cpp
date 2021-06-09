#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        vector<vector<ll>> v(n + 1);
        ll s, t;
        for (ll i = 0; i < m; i++)
        {
            cin >> s;
            cin >> t;
            v[s].push_back(t);
            v[t].push_back(s);
        }
        ll check = 0;
        for (ll i = 1; i <= n; i++)
        {
            if (v[i].size() % 2 != 0)
                check++;
        }
        if (check == 0)
            cout << "2";
        else if (check == 2)
            cout << "1";
        else
            cout << "0";
        cout << endl;
    }
}