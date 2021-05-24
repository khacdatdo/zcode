#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct DT {
    ll heso;
    ll somu;
};
bool cmp (DT a, DT b) {
    return a.somu > b.somu;
}
int main() {  
    ll t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        vector <DT> li;
        ll i = 0;
        while (i < s1.length()) {
            if (isdigit(s1[i])) { 
                ll num1 = 0;
                while (isdigit(s1[i]) && i < s1.length()) {
                    num1 = num1 * 10 + s1[i] - '0';
                    i++;
                }
                i += 3;
                ll num2 = 0;
                while (isdigit(s1[i]) && i < s1.length()) {
                    num2 = num2 * 10 + s1[i] - '0';
                    i++;
                }
                li.push_back(DT());
                li.back().heso = num1;
                li.back().somu = num2;
            } else i++;
        }
        i = 0;
        while (i < s2.length()) {
            if (isdigit(s2[i])) { 
                ll num1 = 0;
                while (isdigit(s2[i]) && i < s2.length()) {
                    num1 = num1 * 10 + s2[i] - '0';
                    i++;
                }
                i += 3;
                ll num2 = 0;
                while (isdigit(s2[i]) && i < s2.length()) {
                    num2 = num2 * 10 + s2[i] - '0';
                    i++;
                }
                li.push_back(DT());
                li.back().heso = num1;
                li.back().somu = num2;
            } else i++;
        }
        sort(li.begin(), li.end(),cmp);
        for (vector <DT> :: iterator it = li.begin() + 1; it != li.end(); it++)
            if (it->somu == (it - 1)->somu) {
                (it - 1)->heso += it->heso;
                li.erase(it);
                it -= 1;
            }
        for (vector <DT> :: iterator it = li.begin(); it != li.end() - 1; it++)
            cout << it->heso << "*x^" << it->somu << " + ";
        cout << li.back().heso << "*x^" << li.back().somu << endl;
    }
}