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
        int min = 999;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) {
                    continue;
                }
                if (mang[j] < mang[i]) {
                    if (min > mang[i] - mang[j]) {
                        min = mang[i] - mang[j];
                    }
                } else {
                    if (min > mang[j] - mang[i]) {
                        min = mang[j] - mang[i];
                    }
                }
            }
        }
        cout << min << endl;
    }
}