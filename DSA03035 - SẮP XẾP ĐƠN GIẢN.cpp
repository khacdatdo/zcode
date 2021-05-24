#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n;

int main() { 
    cin >> n;
    ll x, l[n + 5];
    memset(l, 0, sizeof l);
    ll max_value = 0;
    for (ll i = 0; i < n; i++) {
        cin >> x;
        l[x] = l[x - 1] + 1;
        max_value = max(max_value, l[x]);
    }
    cout << n - max_value;
    cout << endl;
}