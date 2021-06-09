#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m;
vector<vector<ll>> v(1001);

bool BFS()
{
    vector<ll> in_degree(n + 1, 0);
    in_degree[0] = -1;
    for (ll i = 1; i <= n; i++)
        for (auto j : v[i])
            in_degree[j]++;
    queue<ll> qu;
    for (ll i = 1; i <= n; i++)
        if (in_degree[i] == 0)
            qu.push(i);
    ll cnt = 0;
    while (!qu.empty())
    {
        ll s = qu.front();
        qu.pop();
        for (auto j : v[s])
            if (--in_degree[j] == 0)
                qu.push(j);
        cnt++;
    }
    if (cnt != n)
        return true;
    return false;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        ll s, t;
        for (ll i = 1; i <= n; i++)
            v[i].clear();
        for (ll i = 0; i < m; i++)
        {
            cin >> s;
            cin >> t;
            v[s].push_back(t);
        }

        if (BFS())
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}