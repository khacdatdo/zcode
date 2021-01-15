#include<iostream>

using namespace std;

int hihi(int a, int b) {
    if (a > b) return a - b;
    return b - a;
}

main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int mang[n + 1];
        for (int i = 0; i < n; i++) {
            cin >> mang[i];
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (hihi(x, mang[i]) > hihi(x, mang[j])) {
                    swap(mang[i], mang[j]);
                }
            }
        }
        for (int i = 0; i < n; i++) {
            cout << mang[i] << " ";
        }
        cout << endl;
    }
}