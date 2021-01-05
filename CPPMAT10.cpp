#include<iostream>

using namespace std;

bool check(int hang[], int cot[], int count, int i, int j) {
    for (int a = 0; a < count; a++) {
        if (hang[a] == i || cot[a] == j) return true;
    }
    return false;
}

main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int mang[n + 1][m + 1], hang[n + 1], cot[m + 1], count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> mang[i][j];
                if (mang[i][j] == 1) {
                    hang[count] = i;
                    cot[count] = j;
                    count++;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (check(hang, cot, count, i, j)) {
                    cout << 1 << " ";
                } else {
                    cout << mang[i][j] << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
}