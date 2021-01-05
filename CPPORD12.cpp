#include<iostream>

using namespace std;

main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long mang[n + 1];
        for (long long i = 0; i < n; i++) {
            cin >> mang[i];
        }
        bool check;
        long long i;
        for (i = 1; i < n; i++) {
            check = false;
            for (long long j = 0; j < n; j++) {
                if (mang[j] == i) {
                    check = true;
                    break;
                }
            }
            if (!check) {
                cout << i << endl;
                break;
            }
        }
        if (check) {
            cout << ++i << endl;
        }
    }
}