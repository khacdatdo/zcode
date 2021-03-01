#include <iostream>
#include <cstring>
#define MAX 10000;

using namespace std;

int compare(int a[], int b[], int k) {
    int count = 0;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            if (a[i] == b[j]) {
                count++;
            }
        }
    }
    return k - count;
}

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, n;
        bool check = false;
        cin >> n >> k;
        int tohop[k + 1], tohop_2[k + 1];
        for (int i = 0; i < k; i++)
        {
            cin >> tohop[i];
            tohop_2[i] = tohop[i];
        }
        int i = k - 1;
        while (tohop[i] == n - k + i + 1 && i >= 0)
        {
            i--;
        }
        if (i >= 0)
        {
            tohop[i]++;
            for (int j = i + 1; j < k; j++)
            {
                tohop[j] = tohop[j - 1] + 1;
            }
        }
        else
        {
            check = true;
        }
        if (check) {
            cout << k << endl;
        } else {
            cout << compare(tohop, tohop_2, k) << endl;
        }
    }
}