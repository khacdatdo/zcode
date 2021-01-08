#include<bits/stdc++.h>

using namespace std;

main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, m, a, b, count = 0;
        cin >> n >> m >> a >> b;
        for (int i = n; i <= m; i++) {
            if (i % a == 0 || i % b == 0) {
                count++;
            }
        }
        cout << count << endl;
    }
}