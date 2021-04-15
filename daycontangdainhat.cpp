#include <bits/stdc++.h>

using namespace std;

int trengu(int arr[], int n)
{
    int mang[n];

    mang[0] = 1;

    for (int i = 1; i < n; i++)
    {
        mang[i] = 1;
        for (int j = 0; j < i; j++)
            if (arr[i] > arr[j] && mang[i] < mang[j] + 1)
                mang[i] = mang[j] + 1;
    }

    return *max_element(mang, mang + n);
}

main() {
    int t;
    cin >> t;
    int mang[t + 1];
    for (int i = 0; i < t; i++) {
        cin >> mang[i];
    }
    cout << trengu(mang, t);
}