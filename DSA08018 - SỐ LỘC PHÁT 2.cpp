#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(string a, string b) {
    if (a > b) return false;
    return true;

}
int main() {  
    ll t;
    cin >> t;
    cin.ignore();
    while (t--) {
        ll n;
        cin >> n;
        queue <string> qu;
        qu.push("6");
        qu.push("8");
        vector <string> res;
        while(!qu.empty()) {
            string s = qu.front(); qu.pop();
            res.push_back(s);
            if (s.length() < n) {
                qu.push(s + "6");
                qu.push(s + "8");
            }
        }
        cout << res.size() << endl;
        for (auto it : res)
            cout << it << " ";
        cout << endl;
    }
}