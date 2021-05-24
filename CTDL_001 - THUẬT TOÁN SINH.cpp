#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[1000];
ll n;
void Try(ll i) {
    for (ll j = 0; j <= 1; j++) {
        a[i] = j;
        if (i == n - 1) {
            bool check = true;
            for (ll k = 0; k < n / 2; k++)
                if (a[k] != a[n - 1 - k]) {
                    check = false;
                    break;
                }
            if (check) {
                for (ll k = 0; k < n; k++)
                    cout << a[k] << " ";
                cout << endl;
            }
        } else {
            Try(i + 1);
        }
    }
}
int main() { 
    cin >> n;
    Try(0);
}