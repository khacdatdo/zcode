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
        string Suffix;
        getline(cin, Suffix);
        stack<string> st;
        for (ll i = 0; i < Suffix.length(); i++)
        {
            string p = "";
            p.push_back(Suffix[i]);
            if (isalpha(Suffix[i]))
                st.push(p);
            else
            {
                string b = st.top();
                st.pop();
                string a = st.top();
                st.pop();
                string c = a + p + b;
                st.push(c);
            }
        }
        cout << st.top() << endl;
    }
}