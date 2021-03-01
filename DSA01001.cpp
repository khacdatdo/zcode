#include<iostream>
#include<cstring>
#define MAX 10000

using namespace std;

int i, check, n;

main () {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        char xau[MAX];
        cin.getline(xau, MAX);
        
        // thuat toan
        int length = strlen(xau);
        i = length - 1;
        while (i > 0 && xau[i] == '1') {
            i--;
        }
        if (i > 0 || xau[i] == '0') {
            xau[i] = '1';
            for (int j = i + 1; j < length; j++) {
                xau[j] = '0';
            }
        }
        else if (xau[i] == '1') {
            for (i; i < length; i++) {
                xau[i] = '0';
            }
        }

        // in ra
        for (i = 0; i < length; i++) {
            cout << xau[i];
        }
        cout << endl;
    }
}