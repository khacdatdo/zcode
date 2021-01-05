#include<iostream>

using namespace std;

main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q, l, r;
        cin >> n >> q;
        int mang[n + 1];
        for (int i = 0; i < n; i++) {
            cin >> mang[i];
        }
        for (int i = 0; i < q; i++) {
            cin >> l >> r;
            int tong = 0;
            for (int j = l - 1; j < r; j++) {
                tong += mang[j];
            }
            cout << tong << endl;
        }
    }
}