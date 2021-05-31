#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll m, n, k;
        cin >> m >> n >> k;
        ll a[m], b[n];
        for (ll i = 0; i < m; i++)
            cin >> a[i];
        for (ll i = 0; i < n; i++)
            cin >> b[i];
        ll i = 0, j = 0, tmp, res;
        while (i < m && j < n)
        {
            if (a[i] < b[j])
            {
                k--;
                tmp = a[i];
                i++;
            }
            else
            {
                tmp = b[j];
                k--;
                j++;
            }
            if (k == 0)
                res = tmp;
        }
        while (i < m)
        {
            k--;
            if (k == 0)
                res = a[i];
            i++;
        }
        while (j < n)
        {
            k--;
            if (k == 0)
                res = b[j];
            j++;
        }
        cout << res << endl;
    }
    return 0;
}