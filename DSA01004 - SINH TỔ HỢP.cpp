#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[k + 1] = {0};
        for (int i = 1; i < k + 1; i++) a[i] = i;
        bool stop = false;
        while (stop != true) {
            for (int i = 1; i < k + 1; i++) cout << a[i];
            cout << " ";
            int i = k;
            while (i > 0 && a[i] == n - k + i) i--;
            if (i <= 0) stop = true;
            else a[i]++;
            for (i++; i <= k; i++) a[i] = a[i - 1] + 1;
        }
        cout << endl;
    }
    return 0;
}