#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m;
ll chuaxet[1001];
vector<vector<ll>> v(1001);
void BFS(ll k)
{
    queue<ll> qu;
    qu.push(k);
    chuaxet[k] = 0;
    while (!qu.empty())
    {
        ll s = qu.front();
        qu.pop();
        for (auto j : v[s])
        {
            if (chuaxet[j])
            {
                chuaxet[j] = 0;
                qu.push(j);
            }
        }
    }
}
void duyettru()
{
    for (ll i = 1; i <= n; i++)
    {
        chuaxet[i] = 0;
        if (i == n)
            BFS(1);
        else
            BFS(i + 1);
        for (ll p = 1; p <= n; p++)
            if (chuaxet[p])
            {
                cout << i << " ";
                break;
            }
        memset(chuaxet, 1, sizeof chuaxet);
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (ll i = 1; i <= n; i++)
            v[i].clear();
        ll s, t;
        for (ll i = 0; i < m; i++)
        {
            cin >> s;
            cin >> t;
            v[s].push_back(t);
            v[t].push_back(s);
        }
        memset(chuaxet, 1, sizeof chuaxet);
        duyettru();
        cout << endl;
    }
}