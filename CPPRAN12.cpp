#include<iostream>

using namespace std;

bool check(int mang1[], int mang2[], int i, int j) {
    int a = 0, b = 0;
    for (i; i <= j; i++) {
        a += mang1[i];
        b += mang2[i];
    }
    return a == b;
}

main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int mang1[n + 1], mang2[n + 1];
        for (int i = 0; i < n; i++) {
            cin >> mang1[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> mang2[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (check(mang1, mang2, i, j) && j - i + 1 > count) {
                    count = j - i + 1;
                }
            }
        }
        cout << count << endl;
    }
}