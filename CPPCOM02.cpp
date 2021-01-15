#include<iostream>

using namespace std;

void xuat(long long mang[], long long k) {
    for (int i = 1; i <= k; i++) {
        cout << mang[i];
    }
    cout << " ";
}

main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long subset[k + 2];
        for (int i = 1;i <= k; i++) {
            subset[i] = i;
        }
        bool check = false;
        while (!check) {
            int i = k;
            while (subset[i] == n - k + i) {
                i--;
            }
            if (!i) check = true;
            xuat(subset, k);
            subset[i]++;
            for (int j = i + 1; j <= k; j++) {
                subset[j] = subset[i] + j - i;
            }
        }
        cout << endl;
    }
}