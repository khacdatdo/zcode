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
        string s;
        cin >> s;
        stack<ll> st;
        for (ll i = s.length() - 1; i >= 0; i--)
        {
            if (isdigit(s[i]))
                st.push((ll)(s[i] - '0'));
            else
            {
                ll op1 = st.top();
                st.pop();
                ll op2 = st.top();
                st.pop();
                ll sum;
                switch (s[i])
                {
                case '+':
                    sum = op1 + op2;
                    break;
                case '-':
                    sum = op1 - op2;
                    break;
                case '*':
                    sum = op1 * op2;
                    break;
                case '/':
                    sum = op1 / op2;
                    break;
                }
                st.push(sum);
            }
        }
        cout << st.top();
        cout << endl;
    }
}