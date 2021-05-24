#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {  
    ll t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        stack <ll> st;
        for (ll i = 0; i < s1.length(); i++) {
            if (s1[i] == '(') st.push(i);
            else if (s1[i] == ')' && !st.empty()) {
                ll mo = st.top(); st.pop();
                if (mo == 0 || s1[mo - 1] == '+') continue;
                else if (s1[mo - 1] == '-') {
                    for (ll j = mo; j <= i; j++)
                        if (s1[j] == '+') s1[j] = '-';
                        else if (s1[j] == '-') s1[j] = '+';
                }
            }
        }
        string s1_new = "", s2_new = "";
        for (ll i = 0; i < s1.length(); i++)
            if (s1[i] != '(' && s1[i] != ')') s1_new.push_back(s1[i]); 
        while(!st.empty()) st.pop();
        for (ll i = 0; i < s2.length(); i++) {
            if (s2[i] == '(') st.push(i);
            else if (s2[i] == ')'  && !st.empty()) {
                ll mo = st.top(); st.pop();
                if (mo == 0 || s1[mo - 1] == '+') continue;
                else if (s2[mo - 1] == '-') {
                    for (ll j = mo; j <= i; j++)
                        if (s2[j] == '+') s2[j] = '-';
                        else if (s2[j] == '-') s2[j] = '+';
                }
            }
        }
        for (ll i = 0; i < s2.length(); i++)
            if (s2[i] != '(' && s2[i] != ')') s2_new.push_back(s2[i]);
        if (s1_new == s2_new) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}