#include<iostream>

using namespace std;

main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int mang[n + 1], count = 0;
        mang[0] = n;
        count++;
        bool check = true;

        while (check) {
            cout << "(";
            for (int i = 0; i < count; i++) {
                if (i == count - 1) {
                    cout << mang[i];
                } else {
                    cout << mang[i] << " ";
                }
            }
            cout << ") ";

            int p = count - 1;
            while (p >= 0 && mang[p] == 1) {
                p--;
            }
            if (p >= 0) {
                mang[p]--;
                int d, r, s;
                d = count - p;
                r = d / mang[p];
                s = d % mang[p];
                count = p + 1;
                if (r > 0) {
                    for (int i = p + 1; i < count + r; i++) {
                        mang[i] = mang[p];
                    }
                    count += r;
                }
                if (s > 0) {
                    mang[count++] = s;
                }
            } else {
                check = false;
            }
        }

        cout << endl;
    }
}