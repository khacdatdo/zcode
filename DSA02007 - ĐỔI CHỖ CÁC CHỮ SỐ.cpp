#include <bits/stdc++.h>
using namespace std;
#define ll long long

string Try(string s, ll i, ll count, ll n) {
    if (count == n || i == s.length() - 1)
        return s;
    ll tmp = i;
    for (ll j = s.length(); j > i; j--)
        if (s[j] > s[tmp]) tmp = j;
    if (i != tmp) {
        swap (s[i], s[tmp]);
        return Try(s, i + 1, count + 1, n);
    } 
    return Try(s, i + 1, count, n);
}
int main() {  
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        cout << Try(s, 0, 0, n);
        cout << endl;
    }

}