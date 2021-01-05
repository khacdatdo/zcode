#include<iostream>

using namespace std;

main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long mang[n + 1];
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
        cout << mang[k - 1] << endl;
    }
}