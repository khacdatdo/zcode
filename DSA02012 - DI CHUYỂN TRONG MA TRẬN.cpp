#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[100][100] = {0}, dem,m,n;
void Try(ll i, ll j) {
if(i==m-1&&j==n-1){
dem++;return;
}
if ( i + 1 < m) {
Try(i + 1, j);
}
if (j + 1 < n) {
Try(i, j + 1);
}
}
int main() {
int t;
cin >> t;
while (t--) {
cin >> m >> n;
for (ll i = 0; i < m; i++)
for (ll j = 0; j < n; j++)
cin >> a[i][j];
dem = 0;
if (m == 1 && n == 1) cout << "0";
else{
Try(0,0);
cout<<dem;
}
cout << endl;
}
return 0;
}(t--) {
        ll m, n;
        cin >> m >> n;
        for (ll i = 0; i < m; i++)
            for (ll j = 0; j < n; j++)
                cin >> a[i][j];
        dem = 0;
        Try(0, 0, m, n);
        if (m == 1 && n == 1) cout << 0;
        else cout << dem;
        cout << endl;
    }
    return 0;
}