#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, k;
        cin >> n >> m;
        map<ll, ll> a;
        for (ll i = 1; i <= n + m; i++)
        {
            cin >> k;
            a[k]++;
        }
        for (map<ll, ll>::iterator it = a.begin(); it != a.end(); it++)
            cout << it->first << " ";
        cout << endl;
        for (map<ll, ll>::iterator it = a.begin(); it != a.end(); it++)
            if (it->second > 1)
                cout << it->first << " ";
        cout << endl;
    }
    return 0;
}