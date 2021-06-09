
#include <bits/stdc++.h>
#define ll long long
const long int N = 1e6 + 5;
const long int mod = 1e9 + 7;
using namespace std;

string a;
void solve()
{
	cin >> a;
	int dem = 0, xoa = 0;
	stack<char> s;
	for (int i = 0; i < a.length(); i++)
	{
		if (s.size() == 0)
			s.push(a[i]);
		else if (s.top() == '[' && a[i] == ']')
		{
			s.pop();
			xoa += 2;
		}
		else if (s.top() == ']' && a[i] == '[')
		{
			dem += s.size() + xoa;
			s.pop();
		}
		else if (a[i] == '[')
		{
			s.push(a[i]);
		}
		else if (s.top() == ']' && a[i] == ']')
		{
			s.push(a[i]);
		}

		if (s.size() == 0)
			xoa = 0;
	}
	cout << dem << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	
	return 0;
}

