#include <bits/stdc++.h>
using namespace std;

int trengu(char s[], int n)
{
    int mang[n][n], p, q, dis;
    memset(mang, 0, sizeof(mang));
    for (dis = 1; dis < n; ++dis)
        for (p = 0, q = dis; q < n; ++p, ++q)
            mang[p][q] = (s[p] == s[q]) ? mang[p + 1][q - 1] : (min(mang[p][q - 1], mang[p + 1][q]) + 1);
    return mang[0][n - 1];
}

main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        char s[50];
        cin.getline(s, 50, '\n');
        cout << trengu(s, strlen(s)) << endl;
    }
}