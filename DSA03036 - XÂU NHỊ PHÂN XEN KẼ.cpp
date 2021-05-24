#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n;

int main() { 
    cin >> n;
    ll a[n];
    a[0] = 0;
    for (ll i = 1; i < n; i++) a[i] = 1 - a[i - 1];
    for (ll i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
    a[0] = 1;
    for (ll i = 1; i < n; i++) a[i] = 1 - a[i - 1];
    for (ll i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}