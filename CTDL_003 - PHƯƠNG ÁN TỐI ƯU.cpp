#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, w;
struct Tui {
    ll so;
    ll c;
    ll a;
};

Tui tui[1000];
ll chon[1000], fpot, khoi_min;
ll xopt[1000];

void Try(ll i) {
    for (ll j = 0; j <= 1; j++) {
        chon[i] = j;
        if (i == n - 1) {
            ll khoi = 0 , tong = 0;
            for (ll p = 0; p < n; p++) {
                if (chon[p]) {
                    tong += tui[p].c;
                    khoi += tui[p].a;
                }
            }
            if ((tong > fpot && khoi <= w ) || (tong == fpot && khoi < khoi_min && khoi <= w))  {
                fpot = tong; khoi_min = khoi;
                for (ll p = 0; p < n; p++)
                    xopt[p] = chon[p];
            }
        } else Try(i + 1);
        
    }
}
int main() {  
    cin >> n >> w;
    for (ll i = 0; i < n; i++) cin >> tui[i].c;
    for (ll i = 0; i < n; i++) cin >> tui[i].a;
    for (ll i = 0; i < n; i++) tui[i].so = i + 1;
    fpot = 0; khoi_min = INT_MAX; 
    Try(0);
    cout << fpot << endl;
    for (ll i = 0; i < n; i++)
        cout << xopt[i] << " ";
}