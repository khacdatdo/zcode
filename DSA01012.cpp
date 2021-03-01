#include<iostream>
#include<vector>

using namespace std;

vector<string> sinh(int n) {
    if (n == 1) {
        vector<string> arr;
        arr.push_back("0");
        arr.push_back("1");
        return arr;
    } else {
        vector<string> new_arr = sinh(n - 1);
        vector<string> result;
        for (int i = 0; i < new_arr.size(); i++) {
            result.push_back("0" + new_arr[i]);
        }
        for (int i = new_arr.size() - 1; i >= 0; i--) {
            result.push_back("1" + new_arr[i]);
        }
        return result;
    }
}

main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> x = sinh(n);
        for (int i = 0; i < x.size(); i++) {
            cout << x[i] << " ";
        }
        cout << endl;
    }
}