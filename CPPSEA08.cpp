#include<iostream>

using namespace std;

main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, count = 0;
        cin >> n >> x;
        int mang[n + 1];
        for (int i = 0; i < n; i++) {
            cin >> mang[i];
        }
        for (int i = 0; i < n; i++) {
            if (mang[i] == x) {
                count++;
            }
        }
        if (count == 0) {
            count = -1;
        }
        cout << count << endl;
    }
}