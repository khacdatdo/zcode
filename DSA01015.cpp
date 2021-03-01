#include<iostream>

using namespace std;

long long string_to_int(string s) {
    long long r = 0;
    for (long long i = 0; i < s.length(); i++) {
        r = r * 10 + (s[i] - '0');
    }
    return r;
}

main() {
    long long t;
    cin >> t;
    while (t--) {
        string n, result = "9";
        cin >> n;
        bool check = false;
        for (long long i = 1; i < n.length(); i++) {
            result += '0';
        }

        while (!check) {
            if (string_to_int(result) % string_to_int(n) == 0) {
                cout << result << endl;
                break;
            }

            long long pos = result.length() - 1;
            while (pos > 0 && result[pos] == '9') {
                pos--;
            }
            if (pos > 0) {
                result[pos] = '9';
                for (long long i = pos + 1; i < result.length(); i++) {
                    result[i] = '0';
                }
            } else {
                for (long long i = 1; i < result.length(); i++) {
                    result[i] = '0';
                }
                result += '0';
            }
        }
    }
}