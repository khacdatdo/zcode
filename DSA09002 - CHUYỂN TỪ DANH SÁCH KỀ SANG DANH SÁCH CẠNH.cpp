#include <bits/stdc++.h>

using namespace std;
#define ll long long


int main() {
    ll n;
    cin >> n;
    cin.ignore();
    vector<int> ke[51];
    for (int i = 1; i <= n; i++) {
        string s;
        getline(cin, s);
        s += " ";
        int so = 0, j = 0;
        while (j < s.size()) {
            if (s[j] >= '0' && s[j] <= '9')
                so = so * 10 + (int)(s[j] - '0');
            else if (so > 0) {
                ke[i].push_back(so);
                so = 0;
            }
            j++;
        }
    }
    for (int i = 1; i <= n; i++)
        sort(ke[i].begin(), ke[i].end());
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < ke[i].size(); j++)
            if (i < ke[i][j]) 
                cout << i << " " << ke[i][j] << endl;
    }
    return 0;
}