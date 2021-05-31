#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll dat(ll n, ll k)
{
    if (k == 1)
        return n;
    else
    {
        ll temp = dat(n, k / 2) % 123456789;
        if (k % 2 == 0)
            return (temp * temp) % 123456789;
        else
            return (((temp * temp) % 123456789) * n) % 123456789;
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << dat(2, n - 1);
        cout << endl;
    }
    return 0;
}