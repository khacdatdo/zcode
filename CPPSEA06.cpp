#include<iostream>
#include<cmath>

using namespace std;

main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long mang[n + 1];
        for (int i = 0; i < n; i++) {
            cin >> mang[i];
        }
        long long check = 9999999999999, tong;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (check > sqrt(pow(mang[j] + mang[i], 2))) {
                    check = sqrt(pow(mang[j] + mang[i], 2));
                    tong = mang[i] + mang[j];
                }
            }
        }
        cout << tong << endl;
    }
}