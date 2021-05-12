#include <bits/stdc++.h>

using namespace std;

long long solution(long long n, long long *memo)
{

    if (n == 1)
        return 0;
    if (memo[n] != -1)
        return memo[n];

    long long res = solution(n - 1, memo);

    if (n % 2 == 0)
        res = min(res, solution(n / 2, memo));
    if (n % 3 == 0)
        res = min(res, solution(n / 3, memo));

    memo[n] = 1 + res;
    return memo[n];
}

long long solution(long long n)
{
    long long memo[n + 1];

    for (long long i = 0; i <= n; i++)
        memo[i] = -1;

    return solution(n, memo);
}

main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << solution(n) << endl;
    }
}
