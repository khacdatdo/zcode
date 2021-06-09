#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n;
        vector<ll> a;
        for (ll i = 0; i < n; i++)
        {
            cin >> m;
            a.push_back(m);
        }
        sort(a.begin(), a.end());
        for (vector<ll>::iterator it = a.begin(); it != a.end(); it++)
            cout << *it << " ";
        cout << endl;
    }
    return 0;
}