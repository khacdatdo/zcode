#include <bits/stdc++.h>

using namespace std;
#define ll long long
ll C[1000][1001];
int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n, k;
        cin >> n >> k;
        for (ll i = 0; i < n; i++) C[i][0] = 1;
        for (ll i = 0; i < n; i++) {
            ll m = max(i + 1, k);
            for (ll j = 1; j <= m; j++) {
                if (j == i + 1) C[i][j] = 1;
                else C[i][j] = C[i - 1][j] + C[i - 1][j - 1];
                C[i][j] %=  1000000007;
            }
        }
        cout << C[n - 1][k];
        cout << endl; 
    }
    return 0;
}