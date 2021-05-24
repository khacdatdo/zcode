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
        string c = "";
        c += s[0];
        for (ll i = 1; i < s.length(); i++)
            if (s[i] == '0') c += c[i - 1];
            else {
                if (c[i - 1] == '0') c += '1';
                else c += '0';
            };
        cout << c;
        cout << endl;
    }
}