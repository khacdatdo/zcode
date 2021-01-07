#include<bits/stdc++.h>

using namespace std;

long long uoc(long long n) {
    if (n == 1) return 1;
    if (n % 2 == 0) return 2;
    for (int i = 3; i <= n; i += 2) {
        if (n % i == 0) return i;
    }
}

main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cout << uoc(i) << " ";
        }
        cout << endl;
    }
}