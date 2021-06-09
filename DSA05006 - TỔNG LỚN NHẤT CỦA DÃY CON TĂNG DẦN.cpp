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
        ll a[n + 2], l[n + 2];
        a[0] = -1;
        a[n + 1] = INT_MAX, l[n + 1] = 0;
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        for (ll i = n; i >= 0; i--)
        {
            ll jmax = n + 1;
            for (ll j = i + 1; j <= n; j++)
                if (a[j] > a[i] && l[j] > l[jmax])
                    jmax = j;
            l[i] = l[jmax] + a[i];
        }
        cout << l[0] + 1;
        cout << endl;
    }
}