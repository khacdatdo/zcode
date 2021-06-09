#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<string> v(1001);
string add(string a, string b)
{
    while (a.length() < b.length())
        a = "0" + a;
    while (b.length() < a.length())
        b = "0" + b;
    ll n = a.length(), sum, carry = 0;
    string c = "";
    for (ll i = n - 1; i >= 0; i--)
    {
        sum = a[i] - '0' + b[i] - '0' + carry;
        if (sum > 9)
            carry = 1;
        else
            carry = 0;
        c = to_string(sum % 10) + c;
    }
    if (carry == 1)
        c = "1" + c;
    return c;
}
string multiply(string a, string b)
{
    ll m = -1;
    string c = "";
    ll n = a.length();
    for (ll i = n - 1; i >= 0; i--)
    {
        m = m + 1;
        string tmp = "";
        for (ll j = 1; j <= a[i] - '0'; j++)
            tmp = add(tmp, b);
        for (ll j = 1; j <= m; j++)
            tmp = tmp + "0";
        c = add(tmp, c);
    }
    return c;
}
string catalan(ll n)
{
    if (v[n] != "0")
        return v[n];
    else
    {
        for (ll i = 0; i < n; i++)
            v[n] = add(multiply(catalan(i), catalan(n - i - 1)), v[n]);
        return v[n];
    }
}
int main()
{
    ll t;
    cin >> t;
    for (ll i = 0; i <= 100; i++)
        v[i] = "0";
    v[0] = "1";
    v[1] = "1";
    while (t--)
    {
        ll n;
        cin >> n;
        cout << catalan(n);
        cout << endl;
    }
}