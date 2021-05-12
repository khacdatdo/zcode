#include<bits/stdc++.h>

using namespace std;

main() {
    int t;
    cin >> t;
    while (t--) {
        string n, m;
        cin >> n >> m;
        if (n.length() < m.length()) {
            swap(n, m);
        }
        int max = 0;
        for (int i = 0; i < n.length(); i++) {
            int pos = -1;
            for (int j = pos + 1; j < m.length(); j++) {
                if (n[i] == m[j]) {
                    max++;
                    pos = j;
                    break;
                }
            }
        }

        cout << max << endl;
    }
}