#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        ll a[k + 1];
        a[0] = 0;
        for (ll i = 1; i < k + 1; i++)
            cin >> a[i];
        ll i = k;
        while (a[i] == n - k + i) i--;
        if (i < 1) a[++i] = 1;
        else a[i]++;
        for (i++; i < k + 1; i++) a[i] = a[i - 1] + 1;
        for (i = 1; i < k + 1; i++) cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}