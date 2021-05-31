#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll BanCo[8][8], Col[8], Up[20], Down[20];
ll max_sum, sum = 0;
void Try(ll i)
{
    for (ll j = 0; j < 8; j++)
    {
        if (Col[j] && Up[i + j] && Down[i - j + 7])
        {
            sum += BanCo[i][j];
            if (i == 7)
            {
                if (sum > max_sum)
                    max_sum = sum;
            }
            else
            {
                Col[j] = 0;
                Up[i + j] = 0;
                Down[i - j + 7] = 0;
                Try(i + 1);
                Col[j] = 1;
                Up[i + j] = 1;
                Down[i - j + 7] = 1;
            }
            sum -= BanCo[i][j];
        }
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        for (ll i = 0; i < 8; i++)
            for (ll j = 0; j < 8; j++)
                cin >> BanCo[i][j];
        max_sum = 0;
        sum = 0;
        memset(Col, 1, sizeof Col);
        memset(Up, 1, sizeof Up);
        memset(Down, 1, sizeof Down);
        Try(0);
        cout << max_sum << endl;
    }
}