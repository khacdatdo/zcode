#include <bits/stdc++.h>

using namespace std;

void solution(long long arr[], long long n)
{
    stack<long long> s;

    s.push(arr[0]);

    for (long long i = 1; i < n; i++)
    {

        if (s.empty())
        {
            s.push(arr[i]);
            continue;
        }
        while (s.empty() == false && s.top() < arr[i])
        {
            cout << arr[i] << " ";
            s.pop();
        }
        s.push(arr[i]);
    }
    while (s.empty() == false)
    {
        cout << -1 << " ";
        s.pop();
    }
}

main()
{
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long array[n + 1];
        for (long long i = 0; i < n; i++) {
            cin >> array[i];
        }
        solution(array, n);
        cout << endl;
    }
}
