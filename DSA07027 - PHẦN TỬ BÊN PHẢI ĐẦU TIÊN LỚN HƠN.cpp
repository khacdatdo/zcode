#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {  
    ll t;
    cin >> t;
    cin.ignore();
    while (t--) {
        ll n;
        cin >> n;
        ll a[n + 5];
        for (ll i = 0; i < n; i++) cin >> a[i];
        stack <ll> st;
        vector <ll> v;
        for (ll i = n - 1; i >= 0; i--) {
            while (!st.empty() && a[st.top()] <= a[i]) st.pop();
            ll ans = -1;
            if (!st.empty()) ans = a[st.top()];
            st.push(i);
            v.push_back(ans);
        }
        for (vector <ll> :: reverse_iterator it = v.rbegin(); it != v.rend(); it++)
            cout << *it << " ";
        cout << endl;
    }
}