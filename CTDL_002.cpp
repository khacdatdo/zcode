#include<iostream>

using namespace std;

void xuat(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

bool check_tong(int a[], int n, int k) {
    for (int i = 0; i < n; i++) {
        k -= a[i];
    }
    return k == 0;
}

void sinh(int mang[], int day_con[], int n, int k) {
    
}

main() {
    int n, k;
    cin >> n >> k;
    int mang[n + 1], count = 0;
    for (int i = 0; i < n; i++) {
        cin >> mang[i];
    }
    for (int m = 1; m <= n; m++) {
        int day_con[m + 1];
        for (int i = 0; i < m; i++) {
            day_con[i] = mang[i];
        }
        bool cuoi = false;
        while (!cuoi) {
            xuat(day_con, m);
            int pos = m - 1;
            while (pos >= 0 && day_con[pos] == mang[n - m + pos]) {
                pos--;
            }
            if (pos >= 0) {
                day_con[pos] = mang[pos + 1];
                for (int i = pos + 1; i < m; i++) {
                    day_con[i] = mang[i + 1];
                }
            } else {
                cuoi = true;
            }
        }
    }
}