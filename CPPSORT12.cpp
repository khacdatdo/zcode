#include<iostream>

using namespace std;

main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        long long mang1[n + 1], mang2[m + 1];
        for (int i = 0; i < n; i++) {
            cin >> mang1[i];
        }
        long long max = mang1[0];
        for (int i = 0; i < n; i++) {
            if (max < mang1[i]) max = mang1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> mang2[i];
        }
        long long min = mang2[0];
        for (int i = 0; i < m; i++) {
            if (min > mang2[i]) min = mang2[i];
        }
        cout << min * max << endl;
    }
}