#include <bits/stdc++.h>
#define ll long long
const long int N = 1e6 + 5;
const long int mod = 1e9 + 7;
using namespace std;

int n, s, m;
void dat()
{
	cin >> n >> s >> m;
	int y = s - s / 7;
	int z = m * s;
	for (int i = 1; i <= y; i++)
	{
		if (n * i >= z)
		{
			cout << i << endl;
			return;
		}
	}
	cout << -1 << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		dat();
	}
	return 0;
}
