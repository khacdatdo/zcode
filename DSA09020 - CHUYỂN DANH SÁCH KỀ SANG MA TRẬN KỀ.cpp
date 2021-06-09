#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
int main()
{
    cin >> n;
    cin.ignore();
    ll a[n + 5][n + 5];
    for (ll i = 1; i <= n; i++)
        for (ll j = 1; j <= n; j++)
            a[i][j] = 0;
    string s;
    for (ll i = 1; i <= n; i++)
    {
        getline(cin, s);
        ll j = 0, num = 0;
        while (j < s.length())
        {
            if (isdigit(s[j]))
            {
                num = num * 10 + s[j] - '0';
            }
            else
            {
                if (num >= 1 && num <= n && num != i)
                    a[i][num] = 1;
                num = 0;
            }
            j++;
        }
        if (num != 0)
            a[i][num] = 1;
    }
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}