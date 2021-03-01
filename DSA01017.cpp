#include<bits/stdc++.h>

using namespace std;

string bin_to_gray(string bin) {
    string gray;
    gray.push_back(bin[0]);
    for (int i = 1; i < bin.length(); i++) {
        gray.push_back((bin[i - 1] == bin[i]) ? '0' : '1');
    }
    return gray;
}

main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string bin;
        cin >> bin;
        cout << bin_to_gray(bin) << endl;
    }
}