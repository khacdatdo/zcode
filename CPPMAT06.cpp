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
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                    cout << mang[i][j] << " ";
                } else {
                    cout << "  ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
}