#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, k, a[1000][1000];
vector <string> v;
ll hang[1000];
bool col[1000];
void Try(ll i) {
    for (ll j = 1; j <= n; j++)
    if (col[j]) {
       hang[i] = j;
       col[j] = false;
       if (i == n) {
           ll tong = 0;
           string s = "";
           for (ll p = 1; p <= n; p++) {
                tong += a[p][hang[p]];
                s = s + to_string(hang[p]) + " ";
           }
           if (tong == k) v.push_back(s);
       } else Try(i + 1);
       col[j] = true;
    }
}
int main() {
    cin >> n >> k;
    for (ll i = 1; i <= n; i++)
        for (ll j = 1; j <= n; j++)
            cin >> a[i][j];
 
    for (ll i = 1; i <= n; i++) col[i] = true;
    Try(1);
    cout << v.size() << endl;
    for (auto it : v)
       cout << it << endl;
    
}