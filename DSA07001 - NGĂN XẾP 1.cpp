#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() { 
    vector <ll> st;   
    string s;
    while (cin >> s) {
        if (s == "push") {
            ll t;
            cin >> t;
            cin.ignore();
            st.push_back(t);
        } else if (s == "pop") {
            if (st.size() > 0)
                st.pop_back();
        } else if (s == "show") {
            if (st.size() == 0) cout << "empty";
            else {
                for (auto it:st)
                    cout << it << " ";
                cout << endl;
            }
        }
    }

}