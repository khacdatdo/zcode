#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() { 
    vector <ll> st;   
    string s;
    ll t;
    cin >> t;
    cin.ignore();
    while (t--) {
        cin >> s;
        if (s == "PUSH") {
            ll t;
            cin >> t;
            cin.ignore();
            st.push_back(t);
        } else if (s == "POP") {
            if (st.size() > 0)
                st.pop_back();
        } else if (s == "PRINT") {
            if (st.size() == 0) cout << "NONE" << endl;
            else {
                cout << st.back() << endl;
            }
        }
    }

}