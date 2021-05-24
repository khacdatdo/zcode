#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m;
ll a[501][501];
ll xp[3] = {-1, 0, 1};
ll yp[3] = {-1, 0, 1};

struct Dinh {
    ll x;
    ll y;
};
void BFS(ll x, ll y) {
    queue <Dinh> qu;
    a[x][y] = 0;
    qu.push(Dinh());
    qu.back().x = x;
    qu.back().y = y;
    while (!qu.empty()) {
        Dinh s = qu.front(); qu.pop();
        for (ll i = 0; i < 3; i++)
            for (ll j = 0; j < 3; j++)
                if (s.x + xp[i] >= 1 && s.x + xp[i] <= n && s.y + yp[j] >= 1  && s.y + yp[j] <= m) {
                    if (a[s.x + xp[i]][s.y + yp[j]]) {
                        qu.push(Dinh());
                        qu.back().x = s.x + xp[i];
                        qu.back().y = s.y + yp[j];
                        a[s.x + xp[i]][s.y + yp[j]] = 0;
                    }
                }
    }
}
int main() {  
    ll t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        for (ll i = 1; i <= n; i++)
            for (ll j = 1; j <= m; j++)
                cin >> a[i][j];
        ll count = 0;
        for (ll i = 1; i <= n; i++)
            for (ll j = 1; j <= m; j++) 
                if (a[i][j]) {
                    count++;
                    
                    BFS(i, j);
                }
        cout << count;
        cout << endl;
    }
}