#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n;

int main() { 
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    ll max_value = 0;
    max_value = max(a[n - 1] * a[n - 2], a[n - 1] * a[n - 2] * a[n - 3]);
    max_value = max(a[0] * a[1] * a[n - 1], max_value);
    max_value = max(a[0] * a[1], max_value);
    cout << max_value;
    cout << endl;
}