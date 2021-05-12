#include <bits/stdc++.h>

using namespace std;

void solution(long long ar1[], long long ar2[], long long ar3[], long long n1, long long n2, long long n3)
{
    long long i = 0, j = 0, k = 0;
    long long previous1, previous2, previous3;
    previous1 = previous2 = previous3 = 0;
    long long count = 0;
    while (i < n1 && j < n2 && k < n3)
    {
        while (ar1[i] == previous1 && i < n1)
            i++;
        while (ar2[j] == previous2 && j < n2)
            j++;
        while (ar3[k] == previous3 && k < n3)
            k++;
        if (ar1[i] == ar2[j] && ar2[j] == ar3[k])
        {
            count++;
            cout << ar1[i] << " ";
            previous1 = ar1[i];
            previous2 = ar2[j];
            previous3 = ar3[k];
            i++;
            j++;
            k++;
        }
        else if (ar1[i] < ar2[j])
        {
            previous1 = ar1[i];
            i++;
        }
        else if (ar2[j] < ar3[k])
        {
            previous2 = ar2[j];
            j++;
        }
        else
        {
            previous3 = ar3[k];
            k++;
        }
    }
    if (!count) cout << -1;
}
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, z;

        cin >> x >> y >> z;

        long long arr_x[x + 1], arr_y[y + 1], arr_z[z + 1];

        for (long long i = 0; i < x; i++)
        {
            cin >> arr_x[i];
        }
        for (long long i = 0; i < y; i++)
        {
            cin >> arr_y[i];
        }
        for (long long i = 0; i < z; i++)
        {
            cin >> arr_z[i];
        }

        solution(arr_x, arr_y, arr_z, x, y, z);
        cout << endl;
    }
}
