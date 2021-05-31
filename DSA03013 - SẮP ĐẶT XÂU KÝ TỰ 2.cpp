#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll d;
        string s;
        cin >> d >> s;
        ll dem[300] = {0}, res = 0;
        for (ll i = 0; i < s.length(); i++)
        {
            dem[s[i]]++;
            if (res < dem[s[i]])
                res = dem[s[i]];
        }
        if ((res - 1) * (d - 1) > s.size() - res)
            cout << -1;
        else
            cout << 1;
        cout << endl;
    }
}