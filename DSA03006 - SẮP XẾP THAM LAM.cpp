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
        ll a[n + 5], b[n + 5];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        bool check = true;
        sort(b, b + n);
        for (ll i = 0; i < n / 2; i++)
            if (b[i] != a[i] && b[i] != a[n - 1 - i])
            {
                check = false;
                break;
            }
        if (check)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
}