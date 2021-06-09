#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n;
        vector<ll> a;
        for (ll i = 0; i < n; i++)
        {
            cin >> m;
            a.push_back(m);
        }
        vector<ll> b(a.begin(), a.end());
        sort(b.begin(), b.end());
        ll i = 0;
        while (a[i] == b[i])
            i++;
        cout << i + 1 << " ";
        i = n - 1;
        while (a[i] == b[i])
            i--;
        cout << i + 1;
        cout << endl;
    }
    return 0;
}