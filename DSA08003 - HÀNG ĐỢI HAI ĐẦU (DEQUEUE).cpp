#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() { 
    ll t;
    cin >> t;
    deque <ll> qu;
    string s;
    while (t--) {
        cin.ignore();
        cin >> s;
        if (s == "PUSHFRONT") {
            ll x;
            cin >> x;
            qu.push_front(x);
        } else if (s == "PUSHBACK") {
            ll x;
            cin >> x;
            qu.push_back(x);
        }else if (s == "POPFRONT") {
            if (!qu.empty()) qu.pop_front();
        }else if (s == "POPBACK") {
            if (!qu.empty()) qu.pop_back();
        } else if (s == "PRINTFRONT") {
            if (!qu.empty()) cout << qu.front();
            else cout << "NONE";
            cout << endl;
        } else if (s == "PRINTBACK") {
            if (!qu.empty()) cout << qu.back();
            else cout << "NONE";
            cout << endl;
        }
    }
}