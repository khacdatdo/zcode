#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool xet1[5], xet2[5];
ll truoc[6], sau[6];
ll n;
void Try2(ll i) {
    for (ll j = 1; j <= n; j++) {
        sau[i] = j;
        if (i == n) {
            for (ll p = 1; p <= n; p++)
                cout << (char)(truoc[p] + 'A');
            for (ll p = 1; p <= n; p++)
                cout << sau[p];
            cout << endl;
        } else Try2(i + 1);
    }
}
void Try1(ll i) {
    for (ll j = 0; j < n; j++)
        if (xet1[j] == 0) {
            truoc[i] = j;
            xet1[j] = 1;
            if (i == n) {
                Try2(1);
            } else Try1(i + 1);
            xet1[j] = 0;
        }
}
int main() {  
    
        cin >> n;
        memset(xet1, 0, sizeof xet1);
        Try1(1);

}