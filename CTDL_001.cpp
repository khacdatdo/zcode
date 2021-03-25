#include <iostream>
#include<vector>

using namespace std;

void xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

bool check(int a[], int n) {
    int l = 0, r = n - 1;
    while (l < r) {
        if (a[l] != a[r]) {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

main()
{
    int n;
    cin >> n;
    int xau[n + 1];
    for (int i = 0; i < n; i++)
    {
        xau[i] = 0;
    }
    bool cuoi = false;
    while (!cuoi)
    {
        if (check(xau, n)) {
            xuat(xau, n);
        }
        int i = n - 1;
        while (i >= 0 && xau[i] == 1)
        {
            i--;
        }
        if (i >= 0)
        {
            xau[i] = 1;
            for (int j = i + 1; j < n; j++)
            {
                xau[j] = 0;
            }
        }
        else
        {
            cuoi = true;
        }
    }
}