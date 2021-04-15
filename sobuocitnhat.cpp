#include <iostream>

using namespace std;

int trengu(int arr[], int n)
{
    int mang[n];
    for (int i = 0; i < n; i++)
    {
        mang[i] = 1;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] >= arr[j] && mang[i] < mang[j] + 1)
                mang[i] = mang[j] + 1;
        }
    }
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (max < mang[i])
            max = mang[i];
    }
    return n - max;
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
        for (int i = 0; i < n; i++)
        {
            cin >> mang[i];
        }
        cout << trengu(mang, n) << endl;
    }
}