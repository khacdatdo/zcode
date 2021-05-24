#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n] = {0};
        bool stop = false;
        while (stop != true) {
            for (int i = 0; i < n; i++) cout << (char)(a[i] + 'A');
            cout << " ";
            int i = n - 1;
            while (i >= 0 && a[i] == 1) i--;
            if (i < 0) stop = true;
            else a[i]++;
            for (i++; i < n; i++) a[i]--;
        }
        cout << endl;
    }
    return 0;
}