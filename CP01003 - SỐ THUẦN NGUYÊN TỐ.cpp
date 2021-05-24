#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
bool test(ll n) {
    if(n == 2 || n == 3) return true;
    if (n <= 1 || n % 2 == 0 || n % 3 == 0) return false;
    ll sqrt_n = sqrt(n);
    ll k = -1;
    do {
         k += 6;
         if (n % k == 0 || n % (k+2) == 0) break;
    } while (k <= sqrt_n);
    return (k > sqrt_n);
}
bool test1(ll n) {
    ll t = 0;
    while (n > 0) {
        t += n % 10;
        if (test(n % 10) == false) return false;
        n /= 10;
    }
    if (test(t) == false) return false;
    return true;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t, u, v; 
    cin >> t;
    while (t--) {
        cin >> u >> v;
        if (u > v) {
            ll tmp = u;
            u = v;
            v = tmp;
        }
        ll res = 0;
        vector<bool> isPrime(v - u + 1, true);
        for (ll i = 2; i <= sqrt(v); i++) {
            for (ll j = max(i * i, (u + i - 1)/i * i); j <= v; j += i) 
                if (j - u >= 0)
                isPrime[j - u] = false;
        }
        if (1 >= u) isPrime[1 - u] = false;
        for (ll i = u; i <= v; i++)
            if (isPrime[i - u] && test1(i)) res++; 
        cout << res << endl; 
    }
    return 0;
}