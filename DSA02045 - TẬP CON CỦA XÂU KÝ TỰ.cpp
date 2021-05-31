#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
string s;
ll chon[1000];
vector<string> res;
void Try(ll i)
{
    for (ll j = 0; j <= 1; j++)
    {
        chon[i] = j;
        if (i == n - 1)
        {
            string s_res = "";
            for (ll p = 0; p < n; p++)
                if (chon[p])
                    s_res += s[p];
            res.push_back(s_res);
        }
        else
            Try(i + 1);
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin.ignore();
        cin >> s;
        res.clear();
        Try(0);
        sort(res.begin(), res.end());
        for (auto s : res)
            cout << s << " ";
        cout << endl;
    }
}