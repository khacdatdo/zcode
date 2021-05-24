#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        int j = i - 1;
        int tmp = a[i];
        while (j >= 0 && a[j] > tmp) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = tmp;
        cout << "Buoc " << i << ": ";
        for  (int j = 0; j <= i; j++) cout << a[j] << " ";
        cout << endl;
    }
    return 0;
}