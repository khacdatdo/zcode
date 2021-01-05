#include<iostream>
#include<cstring>

using namespace std;

main() {
    int t;
    cin >> t; cin.ignore();
    while (t--) {
        string s;
        cin >> s;
        int dem = s.size();
        for (int i = 0; i < s.size(); i++) {
            for (int j = i + 1; j < s.size(); j++) {
                if (s[i] == s[j]) {
                    dem++;
                }
            }
        }
        cout << dem << endl;
    }
}