#include<iostream>

using namespace std;

main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int mang[n + 1][n + 1];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> mang[i][j];
            }
        }
        for (int i = 1; i < n; i += 2) {
            for (int j = 0; j <= (n - 1) / 2; j++) {
                swap(mang[i][j], mang[i][n - 1 - j]);
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << mang[i][j] << " ";
            }
        }
        cout << endl;
    }
}