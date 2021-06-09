#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll uutien(char x)
{
    if (x == '(')
        return 0;
    else if (x == '+' || x == '-')
        return 1;
    else if (x == '*' || x == '/')
        return 2;
    else if (x == '^')
        return 3;
    return 4;
}
string process(string s)
{
    string res = "";
    stack<char> st;
    for (ll i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
            st.push(s[i]);
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^')
        {
            while (!st.empty() && uutien(st.top()) >= uutien(s[i]))
            {
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        else
        {
            res += s[i];
        }
    }
    while (!st.empty())
    {
        if (st.top() != '(')
            res += st.top();
        st.pop();
    }
    return res;
}
int main()
{
    ll t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        cout << process(s);
        cout << endl;
    }
}