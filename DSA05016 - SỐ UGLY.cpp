#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll getUgly(ll n)
{
    ll ugly[n];
    ugly[0] = 1;
    ll i2, i3, i5, next_ugly = 1;
    i2 = i3 = i5 = 0;
    ll next_i2 = 2;
    ll next_i3 = 3;
    ll next_i5 = 5;
    for (ll i = 1; i < n; i++)
    {
        next_ugly = min(next_i2, min(next_i3, next_i5));
        ugly[i] = next_ugly;
        if (ugly[i] == next_i2)
        {
            i2++;
            next_i2 = ugly[i2] * 2;
        }
        if (ugly[i] == next_i3)
        {
            i3++;
            next_i3 = ugly[i3] * 3;
        }
        if (ugly[i] == next_i5)
        {
            i5++;
            next_i5 = ugly[i5] * 5;
        }
    }
    return next_ugly;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << getUgly(n);
        cout << endl;
    }
}