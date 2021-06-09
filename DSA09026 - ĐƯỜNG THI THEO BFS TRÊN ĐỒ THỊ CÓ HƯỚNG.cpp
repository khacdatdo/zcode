#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m;
vector<vector<ll>> v(1001);
ll chuaxet[1001];
void BFS(ll u)
{
    memset(chuaxet, 0, sizeof chuaxet);
    queue<ll> qu;
    qu.push(u);
    chuaxet[u] = -1;
    while (!qu.empty())
    {
        ll s = qu.front();
        qu.pop();
        for (ll j = 0; j < v[s].size(); j++)
        {
            if (chuaxet[v[s][j]] == 0)
            {
                chuaxet[v[s][j]] = s;
                qu.push(v[s][j]);
            }
        }
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        ll u, dich, s, t;
        cin >> u >> dich;
        for (ll i = 1; i <= n; i++)
            v[i].clear();
        for (ll i = 1; i <= m; i++)
        {
            cin >> s >> t;
            v[s].push_back(t);
        }
        BFS(u);
        if (chuaxet[dich] == 0)
            cout << -1;
        else
        {
            string res = "";
            while (dich != u)
            {
                res = to_string(dich) + " " + res;
                dich = chuaxet[dich];
            }
            res = to_string(dich) + " " + res;
            cout << res;
        }
        cout << endl;
    }
}