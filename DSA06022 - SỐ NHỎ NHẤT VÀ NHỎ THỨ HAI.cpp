#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n;
        set<ll> s;
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            s.insert(x);
        };
        vector<ll> v(s.begin(), s.end());
        if (v.size() == 1)
            cout << -1;
        else
        {
            cout << *(v.begin()) << " " << *(v.begin() + 1);
        }
        cout << endl;
    }
    return 0;
}