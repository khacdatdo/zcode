#include<iostream>

using namespace std;

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
        bool check = false;
        for (int i = 0; i < n; i++) {
            if (mang[i] == x) {
                check = true;
                cout << i + 1 << endl;
                break;
            }
        }
        if (!check) {
            cout << -1 << endl;
        }
    }
}