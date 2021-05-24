#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        int c, m;
        cin >> c >> m;
        if (c == 0) cout << "Second";
        else if (c <= m) cout << "First";
        else {
            
            if (c % (m + 1) == 0) cout << "Second";
            else cout << "First";
        }
        cout << endl;
    }
    return 0;
}