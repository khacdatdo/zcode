#include<iostream>
#include<cstring>

using namespace std;

main() {
    int t;
    cin >> t; cin.ignore();
    while (t--) {
        string str;
        getline(cin, str);
        int k;
        cin >> k; cin.ignore();
        bool mang_check[265] = {false};
        for (int i = 0; i < str.size(); i++) {
            mang_check[str[i]] = true;
        }
        int count = 0;
        for (int i = 'a'; i <= 'z'; i++) {
            if (!mang_check[i]) {
                count++;
            }
        }
        if (k >= count) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
}
