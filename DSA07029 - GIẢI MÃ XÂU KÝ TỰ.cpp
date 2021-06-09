#include <bits/stdc++.h>
using namespace std;
#define ll long long
void repeat(stack<char> &st, string s, ll num)
{
    for (ll i = 0; i < num; i++)
        for (auto j : s)
            st.push(j);
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
        stack<char> st;
        for (ll i = 0; i < s.length(); i++)
        {
            if (s[i] == ']')
            {
                string ans = "";
                char chr;
                while (st.top() != '[')
                {
                    chr = st.top();
                    st.pop();
                    ans = chr + ans;
                }
                st.pop();
                ll num = 0, base = 1;
                while (!st.empty() && st.top() >= '0' && st.top() <= '9')
                {
                    num += (st.top() - '0') * base;
                    base *= 10;
                    st.pop();
                }
                repeat(st, ans, num);
            }
            else
            {
                if (s[i] == '[' && (s[i - 1] < '0' || s[i - 1] > '9'))
                    st.push('1');
                st.push(s[i]);
            }
        }
        string res = "";
        while (!st.empty())
        {
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        cout << res;
        cout << endl;
    }
}