#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(string a, string b) {
    if (a > b) return false;
    return true;

}
int main() {  
    ll t;
    cin >> t;
    cin.ignore();
    while (t--) {
        ll n;
        cin >> n;
        queue <ll> qu;
        qu.push(1);
        while(!qu.empty()) {
            ll p = qu.front(); qu.pop();
            if (p % n == 0) {
                cout << p;
                break;
            } else {
                qu.push(p *  10);
                qu.push(p * 10 + 1);
            }
        }
        cout << endl;
    }
}