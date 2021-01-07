#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        while (n % 2 == 0 && n > 2)
        {
            n /= 2;
        }
        for (int i = 3; i <= sqrt(n); i += 2)
        {
            while (n % i == 0 && n > i)
            {
                n /= i;
            }
        }
        cout << n;
        cout << endl;
    }
}