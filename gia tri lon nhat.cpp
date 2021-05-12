#include<bits/stdc++.h>

using namespace std;

main() {
    int n;
    cin >> n;
    long long array[n + 1];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    long long max = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] > 0)
            max += 2 * array[i];
    }

    cout << max;
}