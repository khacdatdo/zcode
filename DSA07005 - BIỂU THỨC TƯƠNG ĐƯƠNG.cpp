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
        stack <ll> st;
        for (ll i = 0; i < s.length(); i++) {
            if (s[i] == '(') st.push(i);
            else if (s[i] == ')') {
                ll mo = st.top(); st.pop();
                if (mo == 0 || s[mo - 1] == '+') continue;
                else if (s[mo - 1] == '-') {
                    for (ll j = mo; j < i; j++)
                        if (s[j] == '+') s[j] = '-';
                        else if (s[j] == '-') s[j] = '+';
                }
            }
        }
        for (ll i = 0; i < s.length(); i++)
            if (s[i] != '(' && s[i] != ')') cout << s[i]; 
        cout << endl;
    }
}