#include<iostream>

using namespace std;

main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, count = 0;
        cin >> n >> k;
        int mang[n + 1];
        for (int i = 0; i < n; i++) {
            cin >> mang[i];
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (i == j) continue;
                if (mang[j] + mang[i] == k) count++;
            }
        }
        cout << count << endl;
    }
}