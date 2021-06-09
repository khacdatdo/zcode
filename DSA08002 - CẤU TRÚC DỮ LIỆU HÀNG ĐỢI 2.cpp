#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    queue<ll> qu;
    string s;
    while (t--)
    {
        cin.ignore();
        cin >> s;
        if (s == "PUSH")
        {
            ll x;
            cin >> x;
            qu.push(x);
        }
        else if (s == "POP")
        {
            if (!qu.empty())
                qu.pop();
        }
        else if (s == "PRINTFRONT")
        {
            if (!qu.empty())
                cout << qu.front();
            else
                cout << "NONE";
            cout << endl;
        }
    }
}