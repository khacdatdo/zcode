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
        stack<ll> st;
        ll res = 0;
        st.push(-1);
        for (ll i = 0; i < s.length(); i++)
            if (s[i] == '(') st.push(i);
            else {
                st.pop();
                if (st.size() > 0)
                    res = max(res, i - st.top());
                else st.push(i);
            }
        cout << res << endl;
    }
}