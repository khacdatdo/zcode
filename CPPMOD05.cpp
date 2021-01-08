#include <bits/stdc++.h>

using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        long long p, m, k = 0;
        cin >> n >> p >> m;
        for (int i = 0; i < n.size(); i++)
        {
            k = (k * 10 + n[i] - '0') % m;
        }
        long long res = pow(k, p);
        cout << res % m << endl;
    }
}