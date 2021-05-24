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
        queue <string> qu;
        qu.push("1");
        ll res = 1;
        while(!qu.empty()) {
            string s = qu.front(); qu.pop();
            cout << s << " ";
            if (res < n) {
                string s0 = s + "0";
                res++;
                qu.push(s0);
            }
            if (res < n) {
                string s1 = s + "1";
                res++;
                qu.push(s1);
            }
        }
        cout << endl;
    }
}