#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {  
    ll t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        string sub_s = "";
        getline(cin, s);
        ll i = 0;
        stack <string> st;
        while (i < s.length()) {
            if (s[i] == ' ') {
                st.push(sub_s);
                sub_s = "";
            } else {
                sub_s += s[i];
            }
            i++;
        }
        st.push(sub_s);
        while (!st.empty()) {
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
    }
}