#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
ll x[20], to[20];
vector<string> res;
void Try(ll i)
{
    for (ll j = n - to[i - 1]; j >= 1; j--)
    {
        if (j <= x[i - 1])
        {
            x[i] = j;
            to[i] = to[i - 1] + j;
            Try(i + 1);
        }
    }
    if (to[i - 1] == n)
    {
        string s = "(";
        for (ll p = 1; p < i; p++)
            if (p == i - 1)
                s = s + to_string(x[p]) + ")";
            else
                s = s + to_string(x[p]) + " ";
        res.push_back(s);
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        x[0] = n;
        to[0] = 0;
        res.clear();
        Try(1);
        cout << res.size() << endl;
        for (auto s : res)
            cout << s << " ";
        cout << endl;
    }
}