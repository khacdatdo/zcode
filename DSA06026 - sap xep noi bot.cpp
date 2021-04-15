#include<iostream>

using namespace std;

bool check(int mang[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (mang[i] > mang[i + 1]) return false;
    }
    return true;
}

main() {
    int n;
    cin >> n;
    int mang[n + 1];
    for (int i = 0; i < n; i++) {
        cin >> mang[i];
    }

    // thuat toan
    int count = n;
    while (count && !check(mang, n)) {
        for (int i = 0; i < count - 1; i++) {
            if (mang[i] > mang[i + 1])
                swap(mang[i], mang[i + 1]);
        }
        cout << "Buoc " << n - count + 1 << ": ";
        for (int i = 0; i < n; i++) {
            cout << mang[i] << " ";
        }
        cout << endl;
        count--;
    }
}