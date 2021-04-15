#include<iostream>

using namespace std;

void xuat(int mang[], int n) {
    for (int i = 0; i < n; i++) {
        cout << mang[i] << " ";
    }
    cout << endl;
}

main() {
    int n;
    cin >> n;
    int mang[n + 1];
    for (int i = 0; i < n; i++) {
        cin >> mang[i];
    }

    // thuat toan
    for (int i = 0; i < n - 1; i++) {
        int vitri = i;
        for (int j = i + 1; j < n; j++) {
            if (mang[j] < mang[vitri]) {
                vitri = j;
            }
        }
        swap(mang[i], mang[vitri]);
        cout << "Buoc " << i + 1 << ": ";
        xuat(mang, n);
    }
}