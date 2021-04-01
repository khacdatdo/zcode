#include <iostream>

using namespace std;

main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long mang[n + 1];
        for (long long i = 0; i < n; i++)
        {
            cin >> mang[i];
        }
        // sap xep
        for (long long i = 0; i < n; i++)
        {
            for (long long j = i + 1; j < n; j++)
            {
                if (mang[j] < mang[i])
                {
                    swap(mang[i], mang[j]);
                }
            }
        }
        // tong
        long long a = 0, b = 0;
        for (long long i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                a = a * 10 + mang[i];
            }
            else
                b = b * 10 + mang[i];
        }
        cout << a + b << endl;
    }
}