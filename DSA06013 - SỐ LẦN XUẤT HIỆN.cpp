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
        cin >> n >> x;
        ll a[n] = {0};
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        ll res = count(a, a + n, x);
        if (res)
            cout << res;
        else
            cout << -1;
        cout << endl;
    }
    return 0;
}