#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        ll n;
        cin >> n;
        queue<string> qu;
        qu.push("9");
        while (!qu.empty())
        {
            string s = qu.front();
            qu.pop();
            qu.push(s + "0");
            qu.push(s + "9");
            ll tmp = 0;
            for (ll i = 0; i < s.length(); i++)
            {
                tmp = tmp * 10 + s[i] - '0';
                tmp = tmp % n;
            }
            if (tmp == 0)
            {
                cout << s;
                break;
            }
        }
        cout << endl;
    }
}