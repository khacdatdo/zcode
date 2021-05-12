#include <bits/stdc++.h>

using namespace std;

int solution(string str) {
    int count = 0;
    stack<int> s;

    s.push(-1);
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(')
            s.push(i);
        else {
            s.pop();
            if (s.size() > 0)
                count = max(count, i - s.top());
            if (s.size() == 0)
                s.push(i);
        }
    }

    return count;
}

main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << solution(str) << endl;
    }
}