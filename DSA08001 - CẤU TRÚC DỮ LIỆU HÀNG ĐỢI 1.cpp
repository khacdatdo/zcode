#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        queue<ll> qu;
        ll n, m;
        cin >> n;
        while (n--)
        {
            cin >> m;
            switch (m)
            {
            case 1:
                cout << qu.size() << endl;
                break;

            case 2:
                if (qu.empty())
                    cout << "YES";
                else
                    cout << "NO";
                cout << endl;
                break;
            case 3:
                ll t;
                cin >> t;
                qu.push(t);
                break;
            case 4:
                if (!qu.empty())
                    qu.pop();
                break;
            case 5:
                if (!qu.empty())
                    cout << qu.front();
                else
                    cout << "-1";
                cout << endl;
                break;
            case 6:
                if (!qu.empty())
                    cout << qu.back();
                else
                    cout << "-1";
                cout << endl;
                break;
            }
        }
    }
}