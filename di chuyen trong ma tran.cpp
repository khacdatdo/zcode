#include <bits/stdc++.h>
using namespace std;


int n = 0;

int dp[n][n];

int v[n][n];

int minSteps(int i, int j, int arr[][n])
{

    if (i == n - 1 and j == n - 1)
        return 0;

    if (i > n - 1 || j > n - 1)
        return 9999999;

    if (v[i][j])
        return dp[i][j];

    v[i][j] = 1;

    dp[i][j] = 1 + min(minSteps(i + arr[i][j], j, arr),
                       minSteps(i, j + arr[i][j], arr));

    return dp[i][j];
}

int main()
{
    int arr[n][n] = {{2, 1, 2},
                     {1, 1, 1},
                     {1, 1, 1}};

    int ans = minSteps(0, 0, arr);
    if (ans >= 9999999)
        cout << -1;
    else
        cout << ans;

    return 0;
}
