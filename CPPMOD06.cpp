#include <iostream>
#include <bits/stdc++.h>

using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        unsigned long long b, m, k = 0;
        cin >> a >> b >> m;
        for (int i = 0; i < a.length(); i++)
        {
            k = (k * 10 + a[i] - '0') % m;
        }
        unsigned long long res = k;
        for (long long i = 1; i < b; i += 3)
        {
            // chua lam duoc doan nay :((
        }
        cout << res << endl;
    }
}