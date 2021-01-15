// #include <iostream>

// using namespace std;

// main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long a, b, c;
//         cin >> a >> b >> c;
//         cout << ((a % c) * (b % c)) % c << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;
long long add(long long a, long long b, long long p)
{
    if (b == 0)
        return 0;
    int temp = add(a, b / 2, p);
    if (b % 2 == 0)
        return (2 * (temp % p)) % p;
    else
        return (a % p + 2 * (temp % p)) % p;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, p;
        cin >> a >> b >> p;
        cout << add(a, b, p) << endl;
    }
    return 0;
}