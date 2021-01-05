#include<iostream>
#include<cstring>

using namespace std;

main() {
    int t;
    cin >> t; cin.ignore();
    while (t--) {
        char str[1000], new_str[1000][1000];
        int count = 0;
        cin.getline(str, 1000);
        char *cut;
        cut = strtok(str, " \t");
        while (cut != NULL) {
            strcpy(new_str[count++], cut);
            cut = strtok(NULL, " \t");
        }
        for (int i = count; i >= 0; i--) {
            cout << new_str[i] << " ";
        }
        cout << endl;
    }
}