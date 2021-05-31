#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isPrime[201];
vector<vector<ll>> res;
void dat()
{
    memset(isPrime, true, sizeof isPrime);
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i * i <= 200; i++)
        for (ll j = i * i; j <= 200; j += i)
            isPrime[j] = false;
}
void Try(ll i, ll x[], ll s, ll n, ll sum)
{
    for (ll j = x[i - 1] + 1; j <= s - sum; j++)
        if (isPrime[j])
        {
            x[i] = j;
            sum += j;
            if (i == n)
            {
                if (sum == s)
                {
                    vector<ll> v;
                    for (ll p = 1; p <= n; p++)
                        v.push_back(x[p]);
                    res.push_back(v);
                }
            }
            else
                Try(i + 1, x, s, n, sum);
            sum -= j;
        }
}
int main()
{
    ll t;
    cin >> t;
    dat();
    while (t--)
    {
        ll n, p, s;
        cin >> n >> p >> s;
        ll x[n + 1];
        res.clear();
        x[0] = p;
        Try(1, x, s, n, 0);
        cout << res.size() << endl;
        for (ll i = 0; i < res.size(); i++)
        {
            for (auto j : res[i])
                cout << j << " ";
            cout << endl;
        }
    }
}