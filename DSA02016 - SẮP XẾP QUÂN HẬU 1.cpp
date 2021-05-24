#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll Col[10] = {0}, Up[19] = {0}, Down[19] = {0};
ll dem; 
void Try(ll i, ll n) {
    for (ll j = 0; j < n; j++) {
        if (Col[j] == 0 && Up[i + j] == 0 && Down[i - j + n - 1] == 0) {
            if (i == n - 1) dem++;
            else {
                Col[j] = 1; Up[i + j] = 1; Down[i - j + n - 1] = 1;
                Try (i + 1, n);
                Col[j] = 0; Up[i + j] = 0; Down[i - j + n - 1] = 0;
            }
        }
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        for (ll i = 0; i < n; i++) Col[i] = 0;
        for (ll i = 0; i < 2 * n - 1; i++) {
            Up[i] = 0;
            Down[i] = 0;
        }
        dem = 0;
        Try(0, n);
        cout << dem;
        cout << endl;
    }
    return 0;
}