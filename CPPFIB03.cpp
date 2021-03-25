#include <iostream>
using namespace std;
bool check(long long n)
{
    if (n == 0 || n == 1)
        return true;
    long long f = 0, a = 0, b = 1;
    while (f < n)
    {
        f = a + b;
        a = b;
        b = f;
    }
    if (f == n)
        return true;
    return false;
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
        for (int i = 0; i < n; i++)
        {
            if (check(mang[i]))
            {
                cout << mang[i] << " ";
            }
        }
        cout << endl;
    }
}