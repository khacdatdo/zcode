#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool kt[100001];
bool ktra(ll i) {
    priority_queue <ll> qu;
    while (i > 0) {
        qu.push(i % 10);
        i /= 10;
    }
    if (!qu.empty() && qu.top() > 5) return false;
    else {
        while (!qu.empty()) {
            ll tmp = qu.top(); qu.pop();
            if (tmp == qu.top() && !qu.empty()) return false;
        }
    }
    return true;
}
int main() {  
    ll t;
    cin >> t;
    for (ll i = 0; i <= 100000; i++)
        kt[i] = ktra(i);
    while (t--) {
        ll l, r;
        cin >> l >> r;
        ll res = 0;
        for (; l <= r; l++) 
            if(kt[l]) res++;
        cout << res;
        cout << endl;
    }
}