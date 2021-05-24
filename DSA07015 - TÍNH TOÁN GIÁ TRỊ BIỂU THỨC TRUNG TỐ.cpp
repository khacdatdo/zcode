#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll uutien(char x) {
    if (x == '(') return 0;
    else if (x == '+' || x == '-') return 1;
    else if (x == '*' || x == '/') return 2;
    return 3;
}
ll Tinh(ll op1, ll op2, char x) {
    ll res = 0;
    switch (x)
    {
    case '+':
        res = op1 + op2;
        break;
    case '-':
        res = op1 - op2;
        break;
    case '*':
        res = op1 * op2;
        break;
    case '/':
        res = op1 / op2;
        break;
    }
    return res;
}
ll chuyen(string s) {
    stack<ll> res;
    stack <char> st;
    for (ll i = 0; i < s.length(); i++) {
        if (s[i] == '(') st.push(s[i]);
        else if (s[i] == ')') {
            while (!st.empty() && st.top() != '(') {
                ll op2 = res.top(); res.pop();
                ll op1 = res.top(); res.pop();
                res.push(Tinh(op1, op2, st.top()));
                st.pop();
            }
            st.pop();
        } else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            while (!st.empty() && uutien(st.top()) >= uutien(s[i])) {
                ll op2 = res.top(); res.pop();
                ll op1 = res.top(); res.pop();
                res.push(Tinh(op1, op2, st.top()));
                st.pop();
            }
            st.push(s[i]);
        } else {
            ll num = 0;
            while(isdigit(s[i]) && i < s.length()) {
                num = num * 10 + s[i] - '0';
                i++;
            }
            res.push(num);
            i--;
        }
    }
    while (!st.empty()) {
        ll op2 = res.top(); res.pop();
        ll op1 = res.top(); res.pop();
        res.push(Tinh(op1, op2, st.top()));
        st.pop();
    }
    return res.top();
}
int main() {  
    ll t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        cin >> s;
        ll res = chuyen(s);
        cout << res;
        cout << endl;
    }
}