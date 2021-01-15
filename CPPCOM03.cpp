#include <iostream>
#include <vector>
using namespace std;

void print(const vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
        cout << a[i];
    cout << " ";
}

void permute(vector<int> &a, int n)
{
    while (true)
    {
        print(a);
        int k, l;
        for (k = n - 2; k >= 0; k--)
            if (a[k] < a[k + 1])
                break;
        if (k < 0)
            break;
        for (l = n - 1; l > k; l--)
            if (a[k] < a[l])
                break;
        swap(a[k], a[l]);
        for (int i = k + 1, j = n - 1; i < j; i++, j--)
            swap(a[i], a[j]);
    }
}

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> hoanvi;
        for (int i = 1; i < n + 1; i++)
        {
            hoanvi.push_back(i);
        }
        permute(hoanvi, n);
        cout << endl;
    }
}