#include<iostream>

using namespace std;

main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        bool check = true;
        string s;
        cin >> n; cin.ignore();
        cin >> s;
        int pos = s.length() - 2;
        while (pos >= 0 && s[pos] >= s[pos + 1]) {
            pos--;
        }
        if (pos >= 0) {
            for (int j = s.length() - 1; j > pos; j--) {
                if (s[j] > s[pos]) {
                    swap(s[j], s[pos]);
                    break;
                }
            }
            int l = pos + 1, r = s.length() - 1;
            while (l < r) {
                swap(s[l], s[r]);
                l++;
                r--;
            }
        } else {
            check = false;
        }
        cout << n << " ";
        if (check) {
            cout << s << endl;
        } else {
            cout << "BIGGEST" << endl;
        }
    }
}