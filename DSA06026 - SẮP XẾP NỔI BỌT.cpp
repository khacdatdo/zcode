#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n - 1; i++) {
        bool kt = false;
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                kt = true;
            }
        if (kt == false) break;
        cout << "Buoc " << i + 1 << ": ";
        for  (int j = 0; j < n; j++) cout << a[j] << " ";
        cout << endl;
    }
    return 0;
}