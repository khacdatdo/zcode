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
        stack <string> res;
        for (ll i = 0; i < s.length(); i++) {
            if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
                string op2 = res.top(); res.pop();
                string op1 = res.top(); res.pop();
                string c = '(' + op1 + s[i] + op2 + ')';
                res.push(c);
            } else {
                string tmp = "";
                tmp += s[i];
                res.push(tmp);
            }
        }
        cout << res.top();
        cout << endl;
    }
}