#include<iostream>

using namespace std;

bool check(long long mang[], long long n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (mang[j] != mang[i]) return true;
        }
    }
    return false;
}

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
        if (!check(mang, n)) {
            cout << -1 << endl;
        } else {
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (mang[j] < mang[i]) {
                        swap(mang[j], mang[i]);
                    }
                }
            }
            cout << mang[0] << " ";
            long long i = 0;
            do {
                i++;
            } while (mang[i] == mang[0]);
            cout << mang[i] << endl;
        }
    }
}