#include <bits/stdc++.h>

using namespace std;
#define ll long long
ll T[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        ll c = 0;
        for (ll i = 0; i < 10; i++)
            if (n >= T[i]) {
                c += n / T[i];
                n %= T[i];
            }
        cout << c;
        cout << endl; 
    }
    return 0;
}