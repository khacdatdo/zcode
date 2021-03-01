#include <iostream>
#include <cstring>
#include <vector>
#define MAX 10000

using namespace std;

bool kiemtra(string s, int pos, int k)
{
    for (int i = pos; i < pos + k; i++)
    {
        if (s[i] != 'A')
            return false;
    }
    return true;
}

main()
{
    int n, k;
    cin >> n >> k;
    bool check = false;
    vector<string> mang;
    string xau = "";
    for (int i = 0; i < n; i++) {
        xau.push_back('A');
    }

    while (!check) {
        int count = 0;
        for (int i = 0; i <= n - k; i++) {
            if (xau[i] == 'A' && kiemtra(xau, i, k)) {
                count++;
            }
        }
        if (count == 1) {
            mang.push_back(xau);
        }

        int pos = n - 1;
        while (pos >= 0 && xau[pos] == 'B') {
            pos--;
        }
        if (pos >= 0) {
            xau[pos] = 'B';
            for (int i = pos + 1; i < n; i++) {
                xau[i] = 'A';
            }
        } else {
            check = true;
        }
    }

    cout << mang.size() << endl;
    for (int i = 0; i < mang.size(); i++) {
        cout << mang[i] << endl;
    }
}