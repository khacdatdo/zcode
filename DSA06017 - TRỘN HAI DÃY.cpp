#include <bits/stdc++.h>

using namespace std;
#define ll long long
ll a[100000] = {0}, b[1000000] = {0};
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        for (ll i = 0; i < m; i++)
            cin >> b[i];
        sort(a, a + n);
        sort(b, b + m);
        ll i = 0, j = 0;
        while (i < n && j < m)
        {
            if (a[i] <= b[j])
            {
                cout << a[i] << " ";
                i++;
            }
            else
            {
                cout << b[j] << " ";
                j++;
            }
        }
        while (i < n)
        {
            cout << a[i] << " ";
            i++;
        }
        while (j < m)
        {
            cout << b[j] << " ";
            j++;
        }
        cout << endl;
    }
    return 0;
}