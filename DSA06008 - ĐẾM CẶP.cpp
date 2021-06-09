#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll Procesx(ll NoOfY[5], ll x, ll Y[], ll n)
{
    if (x == 0)
        return 0;
    if (x == 1)
        return NoOfY[0];
    ll *it = upper_bound(Y, Y + n, x);
    ll ans = (Y + n) - it;
    ans += NoOfY[0] + NoOfY[1];
    if (x == 2)
        ans -= (NoOfY[3] + NoOfY[4]);
    if (x == 3)
        ans += NoOfY[2];
    return ans;
}
ll Process(ll X[], ll Y[], ll m, ll n)
{
    ll NoOfY[5] = {0};
    for (ll i = 0; i < n; i++)
        if (Y[i] < 5)
            NoOfY[Y[i]]++;
    sort(Y, Y + n);
    ll total = 0;
    for (ll i = 0; i < m; i++)
        total += Procesx(NoOfY, X[i], Y, n);
    return total;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll m, n;
        cin >> m >> n;
        ll X[m], Y[n];
        for (ll i = 0; i < m; i++)
            cin >> X[i];
        for (ll i = 0; i < n; i++)
            cin >> Y[i];
        cout << Process(X, Y, m, n);
        cout << endl;
    }
}