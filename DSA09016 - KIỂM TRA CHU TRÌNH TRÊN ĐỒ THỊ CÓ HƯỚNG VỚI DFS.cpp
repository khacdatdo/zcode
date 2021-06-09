#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m;
vector<vector<ll>> v(1001);
ll chuaxet[1001];
bool check;
void DFS(ll u)
{
    chuaxet[u] = 1;
    for (auto j : v[u])
        if (chuaxet[j] == 0)
            DFS(j);
        else if (chuaxet[j] == 1 && j != u)
        {
            check = true;
            return;
        }
    chuaxet[u] = 2;
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
        check = false;
        memset(chuaxet, 0, sizeof chuaxet);
        for (ll i = 1; i <= n; i++)
        {
            if (chuaxet[i] == 0)
                DFS(i);
        }
        if (check)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}