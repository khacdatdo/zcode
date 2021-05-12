#include <bits/stdc++.h>
using namespace std;

void printSubSeqRec(string str, int n,
                    int index = -1, string curr = "")
{

    if (index == n)
        return;

    if (!curr.empty())
    {
        cout << curr << " ";
    }

    for (int i = index + 1; i < n; i++)
    {

        curr += str[i];
        printSubSeqRec(str, n, i, curr);

        curr = curr.erase(curr.size() - 1);
    }
    return;
}

void printSubSeq(string str)
{
    printSubSeqRec(str, str.size());
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        printSubSeq(str);
        cout << endl;
    }

    return 0;
}
