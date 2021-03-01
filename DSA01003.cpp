#include<iostream>

using namespace std;

main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int hoanvi[n + 1];
        for (int i = 0; i < n; i++) {
            cin >> hoanvi[i];
        }
        int i = n - 2;
        while (i >= 0 && hoanvi[i] > hoanvi[i + 1]) {
            i--;
        }
        if (i >= 0) {
            int j = n - 1;
            while (hoanvi[i] < hoanvi[j]) {
                swap(hoanvi[i], hoanvi[j]);
            }
            int l = i + 1, r = n - 1;
            while (l < r) {
                swap(hoanvi[l], hoanvi[r]);
                l++;
                r--;
            }
        }
        else {
            for (int i = 0; i < n; i++) {
                hoanvi[i] = i + 1;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << hoanvi[i] << " ";
        }
        cout << endl;
    }
}