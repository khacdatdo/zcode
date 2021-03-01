#include<iostream>

using namespace std;

main() {
    long long n;
    cin >> n;
    long long mang[n + 1];
    for (long long i = 0; i < n; i++) {
        cin >> mang[i];
    }

    for (long long i = 0; i < n - 1; i++) {
        for (long long j = i + 1; j < n; j++) {
            if (mang[i] > mang[j]) {
                swap(mang[i], mang[j]);
            }
        }
        cout << "Buoc " << i + 1 << ": ";
        for (long long z = 0; z < n; z++) {
            cout << mang[z] << " ";
        }
        cout << endl;
    }
}