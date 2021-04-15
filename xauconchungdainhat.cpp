#include <bits/stdc++.h>

using namespace std;

int main()
{
    int mang[1002][1002];
    int t;
    cin >> t;
    while (t--)
    {
        string xau1, xau2;
        cin >> xau1 >> xau2;
        int result = 0;
        memset(mang, 0, sizeof(mang));
        for (int i = 1; i <= xau1.size(); i++)
        {
            for (int j = 1; j <= xau2.size(); j++)
            {
                if (xau1[i - 1] == xau2[j - 1])
                    mang[i][j] = mang[i - 1][j - 1] + 1;
                else
                    mang[i][j] = max(mang[i - 1][j], mang[i][j - 1]);
                result = max(result, mang[i][j]);
            }
        }
        cout << result << endl;
    }
}