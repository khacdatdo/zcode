#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[10] = {0}, p[10], dem;
void Kiemtra(ll i) {
    dem++;
    cout << "[";
    for (ll j = 0; j <= i; j++)
        if (j == i) cout << a[j] << "]";
        else if (p[j] == 1) cout << a[j] << " ";
    cout << " ";
}
void Try(ll i, ll k, ll c, ll n) {
    for (ll j = 1; j >= 0; j--) {
        p[i] = j;
        c += a[i] * p[i];
        if (c == k && i <= n - 1) Kiemtra(i);
        else if (i == n - 1) return;
        else Try(i + 1, k, c, n);
        c -= a[i] * p[i];
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, k, c = 0;
        cin >> n >> k;
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            p[i] = 0;
        }
        dem = -1;
        sort(a, a + n);
        Try (0, k, 0, n);
        if (dem == -1) cout << dem;
        cout << endl;
    }
    return 0;
}{
            Try(i + 1);
        }
    }
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        ktra = 0;
        sort(a + 1, a + n + 1);
        Try(1);
        if (ktra == 0)
            cout << "-1" << endl;
        else
            cout << endl;
    }
}