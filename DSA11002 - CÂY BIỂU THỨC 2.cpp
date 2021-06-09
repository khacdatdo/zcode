#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cin.ignore();
        string PreFix;
        getline(cin, PreFix);
        vector<string> v;
        v.push_back(" ");
        ll i = 0;
        string s = "";
        while (i < PreFix.length())
        {
            if (PreFix[i] == ' ')
            {
                v.push_back(s);
                s = "";
            }
            else
            {
                s += PreFix[i];
            }
            i++;
        }
        v.push_back(s);
        for (ll i = n / 2; i >= 1; i--)
        {
            ll op1 = (ll)(stoi(v[i * 2], nullptr));
            ll op2 = (ll)(stoi(v[i * 2 + 1], nullptr));
            ll res = 0;
            if (v[i] == "+")
            {
                res = op1 + op2;
            }
            else if (v[i] == "-")
            {
                res = op1 - op2;
            }
            else if (v[i] == "*")
            {
                res = op1 * op2;
            }
            else if (v[i] == "/")
            {
                res = op1 / op2;
            }
            v[i] = to_string(res);
        }
        cout << v[1] << endl;
    }
}