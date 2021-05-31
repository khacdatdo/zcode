#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[1000];
ll n;
void Try(ll i)
{
    for (ll j = 0; j <= 1; j++)
    {
        a[i] = j;
        if (i == n - 1)
        {
            if (a[0] == 1 && a[n - 1] == 0)
            {
                bool check = true;
                for (ll k = 0; k < n - 1; k++)
                    if (a[k] == 1 && a[k + 1] == 1)
                    {
                        check = false;
                        break;
                    }
                if (check)
                {
                    for (ll k = 0; k < n; k++)
                        if (a[k] == 1)
                            cout << "H";
                        else
                            cout << "A";
                    cout << endl;
                }
            }
        }
        else
        {
            Try(i + 1);
        }
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        Try(0);
    }
}