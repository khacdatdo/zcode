#include<iostream>

using namespace std;

main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, tong;
        cin >> n;
        while (n > 9) {
            tong = 0;
            while (n > 0) {
                tong += n % 10;
                n /= 10;
            }
            n = tong;
        }
        cout << n << endl;
    }
}