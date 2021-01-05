#include<iostream>

using namespace std;

main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int mang[n + 1];
        for (int i = 0; i < n; i++) {
            cin >> mang[i];
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (mang[j] < mang[i]) {
                    swap(mang[j], mang[i]);
                }
            }
        }
        for (int i = 0; i <= (n - 1) / 2; i++) {
            if (i == n - 1 - i) {
                cout << mang[i];
            } else {
                cout << mang[n - 1 - i] << " " << mang[i] << " ";
            }
        }
        cout << endl;
    }
}