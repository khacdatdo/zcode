#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, k;
ll a[20];
vector <string> v;
bool check() {
    ll tong = 0;
    ll i = 0;
    while (i < n) {
        if (a[i] == 0) {
            ll sum = 0;
            while (i < n && a[i] == 0) {
                sum++;
                i++;
            }
            if (sum == k) tong++;
            if (sum > k) tong += 2;
        } else i++;
    } 
    if (tong == 1) return true;
    return false;
}
void Try(ll i) {
    for (ll j = 0; j <= 1; j++) {
        a[i] = j;
        if (i == n - 1) {
            if (check()) {
                string s= "";
                for (ll p = 0; p < n; p++)
                    if (a[p] == 0) s += "A";
                    else s += "B"; 
                v.push_back(s);
            }
        } else {
            Try(i + 1);
        }
    }
}
int main() { 
    cin >> n >> k;
    Try(0);
    cout << v.size() << endl;
    for (auto it : v) {
        cout << it;
        cout << endl;
    }
}