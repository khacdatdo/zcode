#include <bits/stdc++.h>

using namespace std;
#define ll long long
int bigMod1(string s, int n) {
    int hold = 0;
    for (int i = 0; i < s.length(); i++) {
        hold = hold * 10 + s[i] - '0';
        hold = hold % n;
    }
    return hold;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int res = 1;
        for (int i = 2; i < 5; i++) {
            int tmp;
            if (i != 4) tmp = bigMod1(s, 4);
            else tmp = bigMod1(s, 2);
            res = res + ((int)(pow(i, tmp))) % 5;
        }
        res %= 5;
        cout << res << endl;
    }
    return 0;
}