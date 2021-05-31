#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, x, sum;
ll a[21];
ll chon[1000];
vector<string> res;
void Try(ll i)
{
    for (ll j = 0; j < n; j++)
        if (sum < x && a[j] >= chon[i - 1])
        {
            chon[i] = a[j];
            sum += a[j];
            if (sum >= x)
            {
                if (sum == x)
                {
                    string s = "[";
                    for (ll p = 0; p <= i; p++)
                        if (p == i)
                            s = s + to_string(chon[p]) + "]";
                        else
                            s = s + to_string(chon[p]) + " ";
                    res.push_back(s);
                }
            }
            else
                Try(i + 1);
            sum -= a[j];
        }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        sum = 0;
        res.clear();
        Try(0);
        if (res.size() == 0)
            cout << -1;
        else
        {
            for (auto s : res)
                cout << s;
        }
        cout << endl;
    }
}