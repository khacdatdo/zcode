#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll a[n + 2], length[n + 2];
    a[0] = 0;
    a[n + 1] = 1001;
    for (ll i = 1; i < n + 1; i++)
        cin >> a[i];
    length[n + 1] = 1;
    for (ll i = n; i >= 0; i--)
    {
        ll jmax = n + 1;
        for (ll j = i + 1; j < n + 2; j++)
            if (a[j] > a[i] && length[j] > length[jmax])
                jmax = j;
        length[i] = length[jmax] + 1;
    }
    cout << length[0] - 2;
    return 0;
}