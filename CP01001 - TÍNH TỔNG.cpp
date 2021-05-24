#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        ll kq = n * (n + 1) / 2;
        cout << kq << endl;
    }
    return 0;
}