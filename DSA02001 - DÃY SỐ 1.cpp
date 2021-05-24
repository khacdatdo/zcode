#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll a[n] = {0};
        for (ll i = 0; i < n; i++) cin >> a[i];
        cout << "[";
        for (ll i = 0; i < n - 1; i++) cout << a[i] << " ";
        cout << a[n - 1] << "]" << endl;
        n--;
        while (n > 0) {
            for (ll i = 0; i < n; i++) a[i] = a[i] + a[i + 1];
            cout << "[";
            for (ll i = 0; i < n - 1; i++) cout << a[i] << " ";
            cout << a[n - 1] << "]" << endl;
            n--;
        }
        cout << endl;
    }
    return 0;
}