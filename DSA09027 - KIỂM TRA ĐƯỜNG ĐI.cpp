#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m;
vector<vector<ll>> v(1001);
ll chuaxet[1001];
bool BFS(ll u, ll dich)
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
                if (v[s][j] == dich)
                    return true;
                qu.push(v[s][j]);
            }
        }
    }
    return false;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        ll u, dich, s, t;
        for (ll i = 1; i <= n; i++)
            v[i].clear();
        for (ll i = 1; i <= m; i++)
        {
            cin >> s >> t;
            v[s].push_back(t);
            v[t].push_back(s);
        }
        ll q;
        cin >> q;
        while (q--)
        {
            cin >> u >> dich;
            if (BFS(u, dich))
                cout << "YES";
            else
                cout << "NO";
            cout << endl;
        }
    }
}