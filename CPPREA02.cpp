#include<iostream>

using namespace std;

main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long array[n + 1], new_array[n + 1];
        for (int i = 0; i < n; i++) {
            new_array[i] = 0;
            cin >> array[i];
        }
        long long temp = 0;
        for (int i = 0; i < n; i++) {
            if (array[i] != 0) {
                new_array[temp++] = array[i];
            }
        }
        for (int i = 0; i < n; i++) {
            cout << new_array[i] << " ";
        }
        cout << endl;
    }
}