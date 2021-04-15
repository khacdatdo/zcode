#include <bits/stdc++.h>
using namespace std;

int minium(int x, int y, int z)
{
    return min(min(x, y), z);
}

int trengu(string str1, string str2, int m, int n)
{
    int mang[m + 1][n + 1];
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0) {
                mang[i][j] = j;
            } else if (j == 0) {
                mang[i][j] = i;
            } else if (str1[i - 1] == str2[j - 1]) {
                mang[i][j] = mang[i - 1][j - 1];
            } else {
                mang[i][j] = 1 + minium(mang[i][j - 1], mang[i - 1][j], mang[i-1][j-1]);
            }
        }
    }
    return mang[m][n];
}

main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        cout << trengu(s1, s2, s1.length(), s2.length()) << endl;
    }
}