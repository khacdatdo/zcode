#include<iostream>
#include<cstring>

using namespace std;

bool check_bit(int xau[], int n, int k) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (xau[i] == 1) {
            count++;
        }
    }
    return count == k;
}

void xuat(int mang[], int n) {
    for (int i = 0; i < n; i++) {
        cout << mang[i];
    }
    cout << endl;
}


main () {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, k;
        cin >> n >> k;
        int mang[n + 1];
        for (int i = 0; i < n; i++) {
            mang[i] = 0;
        }
        bool check = false;
        
        while (!check) {
            if (check_bit(mang, n, k)) {
                xuat(mang, n);
            }
            int p = n - 1;
            while (p >= 0 && mang[p]) {
                p--;
            }
            if (p >= 0) {
                mang[p] = 1;
                for (int i = p + 1; i < n; i++) {
                    mang[i] = 0;
                }
            } else {
                check = true;
            }
        }
        
    }
}