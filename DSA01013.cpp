#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

string gray_to_binary(string g)
{
    string b;
    b.push_back(g[0]);
    for (int i = 1; i < g.length(); i++)
    {
        if (g[i] == '0')
        {
            b.push_back(b[i - 1]);
        } else {
            b.push_back(b[i - 1] == '0' ? '1' : '0');
        }
    }
    return b;
}

main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        cout << gray_to_binary(s) << endl;
    }
}