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
        ll a[n + 2] = {0};
        a[0] = 0;
        a[n + 1] = 1001;
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        ll leng[n + 2] = {0};
        leng[n + 1] = 1;
        for (ll i = n; i >= 0; i--)
        {
            ll jmax = n + 1;
            for (ll j = i + 1; j <= n + 1; j++)
                if (a[j] >= a[i] && leng[j] > leng[jmax])
                    jmax = j;
            leng[i] = leng[jmax] + 1;
        }
        cout << n - (leng[0] - 2);
        cout << endl;
    }
    return 0;
}