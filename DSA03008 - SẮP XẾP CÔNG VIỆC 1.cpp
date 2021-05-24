#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct Work {
    ll bd;
    ll kt;
};
bool cmp(Work a, Work b) {
    return a.kt < b.kt;
}
int main() { 
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        Work list[n + 1];
        for (ll i = 0; i < n; i++)
            cin >> list[i].bd;
        for (ll i = 0; i < n; i++)
            cin >> list[i].kt;
        sort(list, list + n, cmp);
        ll tmp = 1, finish = 0;
        for (ll i = 1; i < n; i++)
            if (list[i].bd >= list[finish].kt) {
                tmp++;
                finish = i;
            }
        cout << tmp;
        cout << endl;
    }
}