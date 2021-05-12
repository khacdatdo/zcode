#include <iostream>
#include <stack>

using namespace std;

void show(stack<long long> s)
{
    if (s.empty()) {
        cout << "empty" << endl;
        return;
    }
    stack<long long> temp = s;
    long long array[temp.size()], count = 0;
    while (!temp.empty())
    {
        array[count++] = temp.top();
        temp.pop();
    }
    while (count)
    {
        cout << array[--count] << " ";
    }
    cout << endl;
}

main()
{
    string command;
    long long n;
    stack<long long> s;
    for (; cin >> command;)
    {
        if (command == "push")
        {
            int n;
            cin >> n;
            s.push(n);
        }
        else if (command == "pop")
        {
            s.pop();
        }
        else if (command == "show")
        {
            show(s);
        }
    }
}