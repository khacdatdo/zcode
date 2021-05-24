#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j]) {
                int tmp = a[j];
                a[j] = a[i];
                a[i] = tmp;
            }
        cout << "Buoc " << i + 1 << ": ";
        for  (int j = 0; j < n; j++) cout << a[j] << " ";
        cout << endl;
    }
    return 0;
}