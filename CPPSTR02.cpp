#include<iostream>

using namespace std;

main() {
    int t;
    cin >> t; cin.ignore();
    while (t--) {
        string s;
        cin >> s;
        int le = 0;
        int chan = 0;
        for (int i = 0; i < s.size(); i++) {
            if (i % 2 == 0) {
                le += s[i] - '0';
            } else {
                chan += s[i] - '0';
            }
        }
        if ((le - chan) % 11 == 0) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
}