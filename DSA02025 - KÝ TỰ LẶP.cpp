#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
vector <string> list_str;
ll stt_str[11], sum_loop[11];
ll chon[11];
ll max_loop = INT_MAX;
void Try(ll i) {
    for (ll j = 1; j <= n; j++)
        if (chon[j]) {
            chon[j] = 0;
            stt_str[i] = j;
            ll tmp = 0;
            for (ll p = 0; p < list_str[j].size(); p++)
                if (count(list_str[stt_str[i - 1]].begin(), list_str[stt_str[i - 1]].end(), list_str[j][p])) tmp++;
            sum_loop[i] = sum_loop[i - 1] + tmp;
            if (i == n) {
                if (sum_loop[i] < max_loop) max_loop = sum_loop[i];
            } else if (sum_loop[i] < max_loop) Try(i + 1);
            chon[j] = 1;
        }
}
int main() { 
    cin >> n;
    cin.ignore();
    string s = "";
    list_str.clear();
    list_str.push_back(s);
    for (ll i = 0; i < n; i++) {
        cin >> s;
        list_str.push_back(s);
    }
    memset(chon, 1, sizeof chon);
    stt_str[0] = 0; sum_loop[0] = 0;
    Try(1);
    cout << max_loop;
    cout << endl;
}