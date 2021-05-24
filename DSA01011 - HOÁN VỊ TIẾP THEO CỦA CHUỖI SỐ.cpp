#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() { 
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        cin.ignore();
        string s;
        cin >> s;
        ll k = s.length();
        ll i = k - 2;
        while (i >= 0 && s[i] >= s[i + 1]) i--;
        if (i < 0) {
            cout << n << " BIGGEST";
        } else {
            cout << n << " ";
            ll j = k - 1;
            while (j > i && s[j] <= s[i]) j--;
            char tmp = s[i];
            s[i] = s[j];
            s[j] = tmp;
            ll l = i + 1, r = k - 1;
            while (l < r) {
                tmp = s[l];
                s[l] = s[r];
                s[r] = tmp;
                l++; r--;
            }
            cout << s;
        }
        cout << endl;
    }
}