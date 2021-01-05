#include<iostream>

using namespace std;

main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, m;
        cin >> n >> m;
        long long mang[n + m + 1];
        for (int i = 0; i < n + m; i++) {
            cin >> mang[i];
        }
        for (int i = 0; i < n + m; i++) {
            for (int j = i + 1; j < n + m; j++) {
                if (mang[j] < mang[i]) {
                    swap(mang[j], mang[i]);
                }
            }
        }
        for (int i = 0; i < n + m; i++) {
            cout << mang[i] << " ";
        }
        cout << endl;
    }
}