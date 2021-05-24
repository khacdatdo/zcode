#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        int i = s.length() - 1;
        while (s[i] == '1') {
            s[i] = '0';
            i--;
        } 
        if (i >= 0) s[i] = '1';
        cout << s << endl;
        
    }
    return 0;
}