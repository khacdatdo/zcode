#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n] = {0};
        bool stop = true;
        while (stop) {
            int c = 0;
            for (int i = 0; i < n; i++) 
                if (a[i] == 1) c++;
            if (c == k) {
                for (int i = 0; i < n; i++) cout << a[i];
                cout << endl;
            }
            int i = n - 1;
            while (i >= 0 && a[i] == 1) i--;
            if (i < 0) stop = false;
            else {
                a[i]++;
                for (i++; i < n; i++) a[i]--;
            }
        }
        cout << endl;
    }
    return 0;
}