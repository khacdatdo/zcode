#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct Point {
    ll x;
    ll y;
};
char a[500][500];
ll step[500][500];
ll n, m;
ll sx, sy, tx, ty;
bool BFS() {
    queue <Point> qu;
    qu.push({sx, sy});
    step[sx][sy] = 0;
    while (!qu.empty()) {
        Point u = qu.front(); qu.pop();
        ll i = u.x, j = u.y;
        if (i < n - 1 && step[i + 1][j] == -1 && a[i + 1][j] == '.') {
            ll k = i + 1;
            while (k < n && step[k][j] == -1 && a[k][j] == '.') {
                step[k][j] = step[i][j];
                if (k == tx && j == ty)
                    return step[tx][ty] <= 2;
                if ((j < m - 1 && step[k][j + 1] == -1 && a[k][j + 1] == '.') || (j > 0 && step[k][j - 1] == - 1 && a[k][j - 1] == '.')) {
                    step[k][j] = step[i][j] + 1;
                    qu.push({k, j});
                }
                k++;
            }
        }
        if (i > 0 && step[i - 1][j] == -1 && a[i - 1][j] == '.') {
            ll k = i - 1;
            while (k >= 0 && step[k][j] == -1 && a[k][j] == '.') {
                step[k][j] = step[i][j];
                if (k == tx && j == ty)
                    return step[tx][ty] <= 2;
                if ((j < m - 1 && step[k][j + 1] == -1 && a[k][j + 1] == '.') || (j > 0 && step[k][j - 1] == - 1 && a[k][j - 1] == '.')) {
                    step[k][j] = step[i][j] + 1;
                    qu.push({k, j});
                }
                k--;
            }
        }
        if (j < m - 1 && step[i][j + 1] == -1 && a[i][j + 1] == '.') {
            ll k = j + 1;
            while (k < m && step[i][k] == -1 && a[i][k] == '.') {
                step[i][k] = step[i][j];
                if (i == tx && k == ty)
                    return step[tx][ty] <= 2;
                if ((i < n - 1 && step[i + 1][k] == -1 && a[i + 1][k] == '.') || (i > 0 && step[i - 1][k] == - 1 && a[i - 1][k] == '.')) {
                    step[i][k] = step[i][j] + 1;
                    qu.push({i, k});
                }
                k++;
            }
        }
        if (j > 0 && step[i][j - 1] == -1 && a[i][j - 1] == '.') {
            ll k = j - 1;
            while (k >= 0  && step[i][k] == -1 && a[i][k] == '.') {
                step[i][k] = step[i][j];
                if (i == tx && k == ty)
                    return step[tx][ty] <= 2;
                if ((i < n - 1 && step[i + 1][k] == -1 && a[i + 1][k] == '.') || (i > 0 && step[i - 1][k] == - 1 && a[i - 1][k] == '.')) {
                    step[i][k] = step[i][j] + 1;
                    qu.push({i, k});
                }
                k--;
            }
        }
    }
    return step[tx][ty] != -1 ? step[tx][ty] <= 2 : 0;
}

int main() { 
    ll t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        for (ll i = 0; i < n; i++)
            for (ll j = 0; j < m; j++) {
                cin >> a[i][j];
                if (a[i][j] == 'S') {
                    sx = i;
                    sy = j;
                } 
                if (a[i][j] == 'T') {
                    a[i][j] = '.';
                    tx = i;
                    ty = j;
                }
            }
        memset(step, - 1, sizeof step);
        if(BFS()) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}