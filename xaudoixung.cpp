#include <bits/stdc++.h>
#include<cstring>
using namespace std;

int solution(char str[], int n)
{

    int array[n][n], l, h, x;

    memset(array, 0, sizeof(array));

    for (x = 1; x < n; ++x)
        for (l = 0, h = x; h < n; ++l, ++h)
            array[l][h] = (str[l] == str[h]) ? array[l + 1][h - 1] : (min(array[l][h - 1], array[l + 1][h]) + 1);

    return array[0][n - 1];
}

main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        char str[1000];
        fgets(str, 1000, stdin);
        cout << solution(str, strlen(str)) - 1 << endl;
    }
}

