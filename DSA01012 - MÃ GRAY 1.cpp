#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
void Gray() {
    if (n <= 0) return;
    vector <string> v;
    v.push_back("0");
    v.push_back("1");
    for (ll i = 2; i < (1 << n); i = i << 1) {
        for (ll j = i - 1; j >= 0; j--)
            v.push_back(v[j]);
        for (ll j = 0; j < i; j++)
            v[j] = "0" + v[j];
        for (ll j = i; j < 2 * i; j++)
            v[j] = "1" + v[j];
    }
    for (vector <string>::iterator it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
}

int main() {  
    ll t;
    cin >> t;
    while (t--) {
        cin >> n;
        Gray();
        cout << endl;
    }
}