#include<bits/stdc++.h>

using namespace std;

main() {
    int n;
    cin >> n;
    string a, b;
    for (int i = 0; i < n; i++) {
        a += ((i % 2) + '0');
        a.push_back(' ');
        b += ((1 - i % 2) + '0');
        b.push_back(' ');
    }
    cout << a << endl << b;
}