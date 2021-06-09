#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(string a, string b)
{
    if (a > b)
        return false;
    return true;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll s, k;
        cin >> s >> k;
        ll trace[10000];
        memset(trace, 0, sizeof trace);
        queue<ll> qu;
        qu.push(s);
        trace[s] = -1;
        while (!qu.empty())
        {
            ll u = qu.front();
            qu.pop();
            if (u == k)
                break;
            else
            {
                if (trace[u - 1] == 0 && u - 1 > 0 && u - 1 < 10000)
                {
                    qu.push(u - 1);
                    trace[u - 1] = u;
                }
                if (trace[u * 2] == 0 && u * 2 < 10000 && u * 2 > 0)
                {
                    qu.push(u * 2);
                    trace[u * 2] = u;
                }
            }
        }
        ll res = 0;
        if (trace[k] != 0)
        {
            while (k != s)
            {
                res++;
                k = trace[k];
            }
        }
        cout << res;
        cout << endl;
    }
}