#include<bits/stdc++.h>

using namespace std;

main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long mang[n + 1];
        for (int i = 0; i < n; i++) {
            cin >> mang[i];
        }
        long long include = mang[0];
        long long exclude = 0;
        for (long long i = 1; i < n; i++) {
            long long new_exclude = max(exclude, include);
            include = (exclude + mang[i]);
            exclude = new_exclude;
        }
        cout << max(include, exclude) << endl;
    }
}