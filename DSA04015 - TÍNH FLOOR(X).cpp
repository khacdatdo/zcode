#include <bits/stdc++.h>

using namespace std;
#define ll long long

int cmp(string a, string b)
{
    while (a.length() < b.length())
        a = '0' + a;
    while (b.length() < a.length())
        b = '0' + b;
    if (a > b)
        return 1;
    else if (a == b)
        return 0;
    return -1;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cin.ignore();
        vector<string> a;
        string s, x;
        cin >> x;
        for (ll i = 0; i < n; i++)
        {
            cin >> s;
            a.push_back(s);
        }
        ll l = 0, r = n - 1, res = -1;
        while (l <= r && r >= 0 && l < n)
        {
            ll mid = (r + l) / 2;
            if (cmp(a[mid], x) != 1)
            {
                res = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (res == -1)
            cout << res;
        else
            cout << res + 1;
        cout << endl;
    }
    return 0;
}