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
        ll res = 0;
        stack <char> st;
        for (ll i = 0; i < s.length(); i++) {
            if (s[i] == ')') {
                if (!st.empty() && st.top() == '(') { 
                    st.pop();
                    continue;
                }
            }
            st.push(s[i]);
        }
        while(!st.empty()) {
            char s1 = st.top(); st.pop();
            char s2 = st.top(); st.pop();
            if (s1 != s2) res++;
            res++;
        }
        cout << res << endl;
    }
}