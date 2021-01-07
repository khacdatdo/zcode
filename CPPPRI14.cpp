#include<iostream>
#include<bits/stdc++.h>

using namespace std;

main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        for (int i = 2; i <= sqrt(n); i++) {
            bool check = true;
            for (int j = 2; j <= sqrt(i); j++) {
                if (i % j == 0) {
                    check = false;
                    break;
                }
            }
            if (check && pow(i, 2) <= n) {
                cout << pow(i, 2) << " ";
            }
        }
        cout << endl;
    }
}