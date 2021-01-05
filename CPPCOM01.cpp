#include<iostream>

using namespace std;
int t = 0, xau[100], n = 0;

void xuat() {
    for (int i = 1; i <= n; i++) {
        cout << xau[i];
    }
    cout << " ";
}

void sinh(int x) {
    for (int i = 0; i <= 1; i++) {
        xau[x] = i;
        if (x == n) {
            xuat();
        } else {
            sinh(x + 1);
        }
    }
}

main() {
    cin >> t;
    while (t--) {
        cin >> n;
        sinh(1);
        cout << endl;
    }
}