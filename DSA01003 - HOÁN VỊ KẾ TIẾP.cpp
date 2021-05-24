#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n = 0;
        cin >> n;
        int a[n] = {0};
        for (int i = 0; i < n; i++) cin >> a[i];
        int i = n - 2;
        while (i >= 0 && a[i] > a[i + 1]) i--;
        if (i < 0) {
            for (int i = 0; i < n; i++) cout << i + 1 << " ";
        } else {
            int j = n - 1;
            while (a[j] < a[i]) j--;
            int tmp = a[j];
            a[j] = a[i];
            a[i] = tmp;
            int l = i + 1, r = n - 1;
            while (l < r) {
                int tmp = a[l];
                a[l] = a[r];
                a[r] = tmp;
            }
            for (int i = 0; i < n; i++) cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}