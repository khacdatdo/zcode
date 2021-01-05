#include<iostream>
#include<cstring>

using namespace std;

main() {
    int t;
    cin >> t; cin.ignore();
    while (t--) {
        char a[1000];
        cin >> a;
        for (int i = 0; i < strlen(a); i++) {
            bool check = true;
            for (int j = 0; j < strlen(a); j++) {
                if (i == j) continue;
                if (a[i] == a[j]) check = false;
            }
            if (check) cout << a[i];
        }
        cout << endl;
    }
}