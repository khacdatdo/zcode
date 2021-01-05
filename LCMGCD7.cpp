#include<iostream>
#include<bits/stdc++.h>

using namespace std;

main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, z, n;
        cin >> x >> y >> z >> n;
        long long temp = pow(10, n - 1);
        long long new_temp = temp / (x * y * z);
        cout << x * y * z * (new_temp + 1) << endl;
    }
}