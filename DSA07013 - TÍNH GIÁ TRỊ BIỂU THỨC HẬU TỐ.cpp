#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll Calculator(string s) {
    stack <float> st;
    ll i = 0;
    while (i < s.length()) {
        while (s[i] == ' ') i++;
        if (isdigit(s[i])) {
            ll num = 0;
            while (isdigit(s[i])) {
                num = s[i] - '0';
                st.push(num);
                i++;
            }
            
        } else {
            ll op2 = st.top(); st.pop();
            ll op1 = st.top(); st.pop();
            ll tmp;
            switch (s[i])
            {
            case '+':
                tmp = op1 + op2;
                break;
            case '-':
                tmp = op1 - op2;
                break;
            case '*':
                tmp = op1 * op2;
                break;
            case '/':
                tmp = op1 / op2;
                break;
            }
            st.push(tmp);
            i++;
        }
    }
    return st.top();
}
int main() {
    ll t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        cin >> s;
        cout << Calculator(s) << endl;
    }
    
    return 0;
}