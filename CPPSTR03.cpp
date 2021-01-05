#include<iostream>

using namespace std;

main() {
    int t;
    cin >> t; cin.ignore();
    while (t--) {
        string s;
        cin >> s;
        int du = 0;
        for (int i = 0; i < s.size(); i++) {
            du = (2 * du + (s[i] - '0')) % 5;
        }
        if (du == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}