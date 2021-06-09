#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n;

int main()
{
    cin >> n;
    ll a[n + 5];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    vector<ll> le;
    vector<ll> chan;
    for (ll i = 0; i < n; i++)
        if (i % 2 == 0)
            le.push_back(a[i]);
        else
            chan.push_back(a[i]);
    sort(le.begin(), le.end());
    sort(chan.begin(), chan.end(), greater<ll>());
    ll j = 0;
    for (ll i = 0; i < n; i++)
        if (i % 2 == 0)
            cout << le[j] << " ";
        else
        {
            cout << chan[j] << " ";
            j++;
        }

    cout << endl;
}