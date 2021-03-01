#include <iostream>
#include <cstring>
#define MAX 10000

using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        bool check = false;
        cin >> n;
        char xau[n + 1];
        for (int i = 0; i < n; i++) {
            xau[i] = 'A';
        }

        // thuat toan
        int length = n;
        while (!check)
        {
            for (int i = 0; i < length; i++)
            {
                cout << xau[i];
            }
            cout << " ";

            int i = length - 1;
            while (i > 0 && xau[i] == 'B')
            {
                i--;
            }
            if (i > 0 || xau[i] == 'A')
            {
                xau[i] = 'B';
                for (int j = i + 1; j < length; j++)
                {
                    xau[j] = 'A';
                }
            }
            else if (xau[i] == 'B')
            {
                check = true;
            }
        }
        cout << endl;
    }
}