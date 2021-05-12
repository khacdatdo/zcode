#include <iostream>
#include <stack>

using namespace std;

void print(stack<long long> s)
{
    if (s.empty()) {
        cout << "NONE" << endl;
        return;
    }
    else {
        cout << s.top() << endl;
    }
}

main()
{
    string command;
    long long n;
    stack<long long> s;
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++)
    {
        cin >> command;
        if (command == "PUSH")
        {
            int n;
            cin >> n;
            s.push(n);
        }
        else if (command == "POP")
        {
            if (!s.empty()) {
                s.pop();
            }
        }
        else if (command == "PRINT")
        {
            print(s);
        }
    }
}