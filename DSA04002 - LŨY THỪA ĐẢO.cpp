#include <bits/stdc++.h>

using namespace std;
#define ll long long
ll abc(ll n)
{
    ll r = 0;
    while (n > 0)
    {
        r = r * 10 + n % 10;
        n /= 10;
    }
    return r;
}
ll xyz(ll n, ll k)
{
    if (k == 1)
        return n;
    ll temp = xyz(n, k / 2) % 1000000007;
    if (k % 2 == 0)
        return (temp * temp) % 1000000007;
    else
        return (((temp * temp) % 1000000007) * n) % 1000000007;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll r = abc(n);
        cout << xyz(n, r);
        cout << endl;
    }
    return 0;
}