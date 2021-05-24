#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll x;
ll Try() {
    queue <ll> qu;
    qu.push(9);
    while (1) {
       ll s = qu.front(); qu.pop();
       if (s % x == 0) return s;
       ll j = 0;
       s = s * 10 + j;
       if (s % x == 0) return s;
       qu.push(s);
       j = 9;
       s = s + j;
       if (s % x == 0) return s;
       qu.push(s);
    }
}
int main() {
    ll t;
    cin >> t;
    while (t--) {
       cin >> x;
       ll res = Try();
       cout << res << endl; 
    }
	return 0;
}