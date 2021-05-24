#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        double n, h;
        cin >> n >> h;
        for (int i = 1; i < n; i++) {
            double res = (double)(sqrt(i / n)) * h;
            printf("%.6f ", res);
        }
        cout << endl;
    }
    return 0;
}