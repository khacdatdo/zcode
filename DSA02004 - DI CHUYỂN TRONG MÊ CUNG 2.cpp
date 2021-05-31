#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
ll a[10][10];
ll x[4] = {1, 0, 0, -1};
ll y[4] = {0, -1, 1, 0};
char kitu[4] = {'D', 'L', 'R', 'U'};
vector<char> res;
ll dem = -1;
void Try(ll i, ll j)
{
    for (ll u = 0; u < 4; u++)
        if (i + x[u] < n && i + x[u] >= 0 && j + y[u] < n && j + y[u] >= 0 && a[i + x[u]][j + y[u]])
        {
            res.push_back(kitu[u]);
            a[i + x[u]][j + y[u]] = 0;
            if (i + x[u] == n - 1 && j + y[u] == n - 1)
            {
                dem++;
                for (auto i : res)
                    cout << i;
                cout << " ";
            }
            else
                Try(i + x[u], j + y[u]);
            res.erase(res.end() - 1);
            a[i + x[u]][j + y[u]] = 1;
        }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (ll i = 0; i < n; i++)
            for (ll j = 0; j < n; j++)
                cin >> a[i][j];
        res.clear();
        dem = -1;
        if (a[0][0] == 1)
        {
            a[0][0] = 0;
            Try(0, 0);
        }
        if (dem == -1)
            cout << -1;
        cout << endl;
    }
}