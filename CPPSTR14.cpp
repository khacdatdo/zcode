#include<iostream>
#include<cstring>

using namespace std;

main() {
    int t;
    cin >> t; cin.ignore();
    while (t--) {
        char s[1000] = {'\0'};
        cin.getline(s, 1000);
        char *cut;
        cut = strtok(s, " \t\n");
        int count = 0;
        while (cut != NULL) {
            count++;
            cut = strtok(NULL, " \t\n");
        }
        cout << count << endl;
    }
}