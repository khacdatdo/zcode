#include<iostream>
#include<cstring>

using namespace std;

int char_to_int(char a[]) {
    int tong = 0;
    for (int i = 0; i < strlen(a); i++) {
        tong = tong * 10 + (a[i] - '0');
    }
    return tong;
}

int change(char number[], char from = '5', char to = '6') {
    for (int i = 0; i < strlen(number); i++) {
        if (number[i] == from) {
            number[i] = to;
        }
    }
    return char_to_int(number);
}

main() {
    char a[10], b[10];
    cin >> a >> b;
    cout << change(a, '6', '5') + change(b, '6', '5') << " " << change(a) + change(b);
}