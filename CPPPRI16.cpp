#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool check(long long n)
{
    if (n <= 3)
    {
        return n > 1;
    }
    else if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i <= sqrt(n); i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int count = 0;
        for (int i = 0; i <= sqrt(n); i++)
        {
            if (check(i) && i * i <= n)
                count++;
        }
        cout << count << endl;
    }
}