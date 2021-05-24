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
        ll i = s.length() - 1;
        while (i >= 0 && s[i] == '0') i--;
        if (i < 0) {
            i++;
            while (i < s.length()) {
                s[i] = '1';
                i++;
            }
        } else {
            s[i] = '0';
            i++;
            while (i < s.length()) {
                s[i] = '1';
                i++;
            }
        }
        cout << s << endl;
    }
}