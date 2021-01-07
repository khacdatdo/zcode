#include<bits/stdc++.h>

using namespace std;

bool check(long long n) {
    if (n <= 3) {
        return n > 1;
    } else if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i <= sqrt(n); i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, m;
        cin >> m >> n;
        for (int i = m; i <= n; i++) {
            if (check(i)) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
}