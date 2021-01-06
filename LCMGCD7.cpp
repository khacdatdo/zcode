#include <iostream>
#include <bits/stdc++.h>

using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, z, n;
        cin >> x >> y >> z >> n;
        long long bcnn = (x * y) / __gcd(x, y);
                  bcnn = (bcnn * z) / __gcd(bcnn, z);
        long long temp = pow(10, n - 1);
        long long du = temp % bcnn > 0 ? 1 : 0;
                  temp = temp / bcnn;
                  bcnn = bcnn * (temp + du);
        if (bcnn >= pow(10, n - 1) && pow(10, n)) {
            cout << bcnn << endl;
        } else {
            cout << -1 << endl;
        }
    }
}