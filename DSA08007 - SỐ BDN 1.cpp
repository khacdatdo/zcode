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
    cin.ignore();
    while (t--)
    {
        string n;
        cin >> n;
        queue<string> qu;
        qu.push("1");
        ll res = 0;
        while (!qu.empty())
        {
            string s = qu.front();
            qu.pop();
            if (s.length() < n.length())
            {
                qu.push(s + "0");
                qu.push(s + "1");
                res++;
                while (qu.front().length() == s.length())
                {
                    res++;
                    qu.push(qu.front() + "0");
                    qu.push(qu.front() + "1");
                    qu.pop();
                }
            }
            else if (cmp(s, n) && s.length() == n.length())
                res++;
            else
                break;
        }
        cout << res;
        cout << endl;
    }
}