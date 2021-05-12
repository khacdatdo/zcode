#include<bits/stdc++.h>

using namespace std;

main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        char str[1000000];
        fgets(str, 1000000, stdin);
        stack<int> s;

        int count = 0;
        for (int i = 0; i < strlen(str); i++) {
            if (str[i] == '(') {
                s.push(++count);
                cout << count << " ";
            } else if (str[i] == ')') {
                cout << s.top() << " ";
                s.pop();
            }
        }
        cout << endl;
    }
}