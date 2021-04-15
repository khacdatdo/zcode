#include <iostream>

using namespace std;

void xuat(int mang[], int n)
{
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            cout << mang[i];
        }
        else
        {
            cout << mang[i] << " ";
        }
    }
    cout << "]" << endl;
}

void trengu(int mang[], int n)
{
    xuat(mang, n);
    if (n == 1)
        return;
    for (int i = 0; i < n; i++)
    {
        mang[i] += mang[i + 1];
    }
    trengu(mang, n - 1);
}

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int mang[n + 1];
        for (int i = 0; i < n; i++) {
            cin >> mang[i];
        }
        trengu(mang, n);
    }
}