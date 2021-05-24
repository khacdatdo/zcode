#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() { 
    ll t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        cin >> s;
        stack <string> st;
        ll n = s.length();
        for (ll i = n - 1; i >= 0; i--) {
            string p = "";
            p.push_back(s[i]);
            if(isalpha(s[i])) {
                st.push(p);
            } else {
                string c = "(";
                string op1 = st.top(); st.pop();
                string op2 = st.top(); st.pop();
                c = c + op1 + p + op2 + ")";
                st.push(c);
            }
        }
        cout << st.top() << endl;
    }
}