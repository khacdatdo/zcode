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
        priority_queue<ll, vector<ll>, greater<ll>> q;
        ll x;
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            q.push(x);
        }
        ll tong = 0;
        while (q.size() > 1)
        {
            ll a1 = q.top();
            q.pop();
            ll a2 = q.top();
            q.pop();
            q.push(a1 + a2);
            tong += (a1 + a2);
        }
        cout << tong;
        cout << endl;
    }
}