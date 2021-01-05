#include<iostream>

using namespace std;

main() {
    int t;
    cin >> t; cin.ignore();
    while (t--) {
        string s;
        cin >> s;
        if (s[s.size() - 1] == '6' && s[s.size() - 2] == '8') {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
}