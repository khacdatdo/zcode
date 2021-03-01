#include<iostream>
#include<cstring>
#define MAX 10000;

using namespace std;

main() {
    int t;
    cin >> t;
    while (t--) {
        int k, n;
        cin >> n >> k;
        int tohop[k + 1];
        for (int i = 0; i < k; i++) {
            cin >> tohop[i];
        }
        int i = k - 1;
        while (tohop[i] == n - k + i + 1 && i >= 0) {
            i--;
        }
        if (i >= 0) {
            tohop[i]++;
            for (int j = i + 1; j < k; j++) {
                tohop[j] = tohop[j - 1] + 1;
            }
        } else {
            for (int j = 0; j < k; j++) {
                tohop[j] = j + 1;
            }
        }
        for (int i = 0; i < k; i++) {
            cout << tohop[i] << " ";
        }
        cout << endl;
    }
}