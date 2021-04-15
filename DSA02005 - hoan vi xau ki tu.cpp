#include <iostream>

using namespace std;

bool check[50] = {false};
string xau = "";

void trengu(string str)
{
    if (xau.length() == str.length())
    {
        cout << xau << " ";
    }
    else
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (!check[str[i]])
            {
                check[str[i]] = true;
                trengu(str);
                check[str[i]] = false;
            }
        }
    }
}

main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string str;
        cin >> str;
        cout << str << endl;
        for (int i = 0; i < str.length(); i++) {
            check[str[i]] = false;
        }
        trengu(str);
        cout << endl;
    }
}