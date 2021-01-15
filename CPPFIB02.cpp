#include<iostream>

using namespace std;

bool check(long long n) {
    if (n == 0 || n == 1) return true;
    long long f = 0, a = 0, b = 1;
    while (f < n) {
        f = a + b;
        a = b;
        b = f;
    }
    if (f == n) return true;
    return false;
}

main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (check(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}