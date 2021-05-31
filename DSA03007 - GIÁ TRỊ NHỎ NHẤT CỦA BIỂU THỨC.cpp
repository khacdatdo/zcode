#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
vector<ll> a;
vector<ll> b;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        a.clear();
        b.clear();
        ll x;
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            b.push_back(x);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<ll>());
        ll mul = 0;
        for (ll i = 0; i < n; i++)
            mul += a[i] * b[i];
        cout << mul;
        cout << endl;
    }
}