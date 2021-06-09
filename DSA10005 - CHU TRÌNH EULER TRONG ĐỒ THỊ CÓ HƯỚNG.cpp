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
        vector<vector<ll>> v_ra(n + 1);
        vector<vector<ll>> v_vao(n + 1);
        ll s, t;
        for (ll i = 0; i < m; i++)
        {
            cin >> s;
            cin >> t;
            v_ra[s].push_back(t);
            v_vao[t].push_back(s);
        }
        ll check = 0;
        for (ll i = 1; i <= n; i++)
        {
            if (v_ra[i].size() != v_vao[i].size())
                check++;
        }
        if (check == 0)
            cout << "1";
        else
            cout << "0";
        cout << endl;
    }
}