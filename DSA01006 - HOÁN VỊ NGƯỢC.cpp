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
        for (int i = 0; i < n; i++) a[i] = n - i;
        bool stop = false;
        while (stop != true) {
            for (int i = 0; i < n; i++) cout << a[i];
            cout << " ";
            int i = n - 2;
            while (i >= 0 && a[i] < a[i + 1]) i--;
            if (i < 0) stop = true;
            else {
                int j = n - 1;
                while (a[j] > a[i]) j--;
                swap(a[i], a[j]);
                int l = i + 1, r = n - 1;
                while (l < r) {
                    swap(a[l], a[r]);
                    l++; r--;
                }
            }
        }
        cout << endl;
    }
    return 0;
}