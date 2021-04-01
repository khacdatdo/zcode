#include <iostream>

using namespace std;

int TrenGu(int n)
{
    int mang[11] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    int count = 0;
    int i = 9;
    while (n > 0) {
        count += n / mang[i];
        n %= mang[i];
        i--;
    }
    return count;
}

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << TrenGu(n) << endl;
    }
}