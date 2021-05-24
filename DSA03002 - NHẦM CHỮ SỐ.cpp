#include <bits/stdc++.h>

using namespace std;
#define ll long long
string Sum(string a, string b) {
    string c = "";
    ll nho = 0;
    for (ll i = a.length() - 1; i >= 0; i--) {
        ll s = a[i] - '0' + b[i] - '0' + nho;
        c = (char)(s % 10 + '0') + c;
        nho = s / 10;
    }
    if (nho != 0) c = '1' + c;
    return c;

}
int main() {
    string a, b;
    cin >> a >> b;
    while (a.length() < b.length()) a = '0' + a;
    while (b.length() < a.length()) b = '0' + b;
    ll n = a.length();
    for (ll i = 0; i < n; i++) 
        if (a[i] == '6') a[i] = '5';
    for (ll i = 0; i < n; i++)
        if (b[i] == '6') b[i] = '5';
    cout << Sum(a, b) << " ";
    for (ll i = 0; i < n; i++) 
        if (a[i] == '5') a[i] = '6';
    for (ll i = 0; i < n; i++)
        if (b[i] == '5') b[i] = '6';
    cout << Sum(a, b);
    return 0;
}