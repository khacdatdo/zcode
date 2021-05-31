#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        ll res = 0;
        ll l = 0, r = n - 1;
        while (l <= r && l < n && r >= 0)
        {
            ll mid = (r + l) / 2;
            if (a[mid] == 0)
            {
                res += (mid - l) + 1;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << res << endl;
    }
    return 0;
}