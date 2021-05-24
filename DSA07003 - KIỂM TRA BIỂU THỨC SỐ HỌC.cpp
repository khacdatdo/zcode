#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct MoDong {
    ll mo;
    ll dong;
};

bool ktra(MoDong m[], ll n) {
    for (ll i = 0; i < n; i++)
        if (m[i].dong - m[i].mo <= 2) return false;
        else if (i > 0 && m[i - 1].mo - m[i].mo == 1 && m[i].dong - m[i - 1].dong == 1) return false;
    return true;
}
int main() { 
    ll t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        cin >> s;
        stack <ll> st;
        MoDong m[20];
        ll n = 0;
        for (ll i = 0; i < s.length(); i++)
            if (s[i] == '(') st.push(i);
            else if (s[i] == ')') {
                m[n].mo = st.top(); st.pop();
                m[n].dong = i;
                n++;
            }
        if (ktra(m, n)) cout << "No";
        else cout << "Yes";
        cout << endl;
    }
}