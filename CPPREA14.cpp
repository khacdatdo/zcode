#include<iostream>

using namespace std;

main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        long long mang[a * b + 1];
        for (int i = 0; i < a * b; i++) {
            cin >> mang[i];
        }
        for (int i = 0; i < a * b; i++) {
            for (int j = i + 1; j < a * b; j++) {
                if (mang[j] < mang[i]) {
                    long long temp = mang[i];
                    mang[i] = mang[j];
                    mang[j] = temp;
                }
            }
        }
        for (int i = 0; i < a * b; i++) {
            cout << mang[i] << " ";
        }
        cout << endl;
    }
}