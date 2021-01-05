#include<iostream>

using namespace std;

main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int mang[n + 1];
        int max = -99999, min = 99999;
        for (int i = 0; i < n; i++) {
            cin >> mang[i];
            if (min > mang[i]) min = mang[i];
            if (max < mang[i]) max = mang[i];
        }
        int count = 0;
        for (int i = min + 1; i < max; i++) {
            bool check = false;
            for (int j = 0; j < n; j++) {
                if (mang[j] == i) {
                    check = true;
                    break;
                }
            }
            if (!check) {
                count++;
            }
        }
        cout << count << endl;
    }
}