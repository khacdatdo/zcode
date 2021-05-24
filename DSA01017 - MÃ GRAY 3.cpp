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
            if (s[i] == s[i - 1]) c += "0";
            else c += "1";
        cout << c;
        cout << endl;
    }
}