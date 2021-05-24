#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll  n;
    cin >> n;
    ll s = 0, t = 1;
    for (ll i = 1; i <= n; i++) {
        t *= i;
        s += t;
    }
    cout << s;
    return 0;
}