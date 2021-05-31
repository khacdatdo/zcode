#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[1000], b[1000], res;
ll n, sum;
void Try(ll i)
{
    for (ll j = 0; j <= 1; j++)
    {
        a[i] = j;
        if (i == n - 1)
        {
            ll tmp = 0;
            for (ll k = 0; k < n; k++)
                if (a[k] == 1)
                {
                    tmp += b[k];
                }
            if (tmp == sum)
            {
                res++;
                for (ll k = 0; k < n; k++)
                    if (a[k] == 1)
                        cout << b[k] << " ";
                cout << endl;
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
    cin >> n >> sum;
    for (ll i = 0; i < n; i++)
        cin >> b[i];
    res = 0;
    Try(0);
    cout << res;
}