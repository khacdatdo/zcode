#include<iostream>

using namespace std;

main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long mang[n + 1], res = -1;
        bool check = false;
        for (int i = 0; i < n - 1; i++) {
            cin >> mang[i];
            if (i + 1 != mang[i] && !check) {
                res = i + 1;
                check = true;
            }
        }
        if (res == -1) {
            res = n;
        }
        cout << res << endl;
    }
}