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
        stack<ll> st;
        st.push(1);
        ll num = 1;
        for (ll i = 0; i < s.length(); i++)
        {
            num++;
            if (s[i] == 'I')
                st.push(num);
            else
            {
                num = st.top();
                st.pop();
                ll tmp = 0;
                while (s[i] == 'D' && i < s.length())
                {
                    tmp++;
                    i++;
                }
                while (tmp >= 0)
                {
                    st.push(num + tmp);
                    tmp--;
                }
                num = i + 1;
                i--;
            }
        }
        string res = "";
        while (!st.empty())
        {
            res += to_string(st.top());
            st.pop();
        }
        reverse(res.begin(), res.end());
        cout << res;
        cout << endl;
    }
}