#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        ll n = s.length();
        ll a[n] = {0};
        for (ll i = 0; i < n; i++) a[i] = i;
        bool stop = true;
        while (stop) {
            for (ll i = 0; i < n; i++) cout << s[a[i]];
            cout << " ";
            ll i = n - 2;
            while (i >= 0 && a[i] > a[i + 1]) i--;
            if (i < 0) stop = false;
            else {
                ll j = n - 1;
                while (a[j] < a[i]) j--;
                swap(a[i], a[j]);
                ll l = i + 1, r = n - 1;
                while (l < r) {
                    swap (a[l], a[r]);
                    l++; r--;
                }
            }
        }
        cout << endl;
    }
    return 0;
}