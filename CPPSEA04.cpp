#include<iostream>

using namespace std;

main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, x;
        cin >> n >> x;
        long long mang[n + 1], res = -1;
        bool check = false;
        for (int i = 0; i < n; i++) {
            cin >> mang[i];
            if (!check && mang[i] == x) {
                check = true;
                res = i + 1;
            }
        }
        cout << res << endl;
    }
}