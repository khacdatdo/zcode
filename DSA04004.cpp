#include <bits/stdc++.h>

using namespace std;

long long trengu(long long n, long long k) {
    if (k % 2 != 0) return 1;
    float x = pow(2, n);
    if (x / 2 == k) return n;
    if (x / 2 < k) {
        k -= (int) x / 2;
    }
    return trengu(n - 1, k);
}

main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        cout << trengu(n, k) << endl;
    }
}