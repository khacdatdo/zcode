#include <bits/stdc++.h>
using namespace std;

char dat(int n, long long i, long long abcxyz[])
{
	if (n == 1)
		return 'A';
	if (n == 2)
		return 'B';
	if (i > abcxyz[n - 2])
		return dat(n - 1, i - abcxyz[n - 2], abcxyz);
	return dat(n - 2, i, abcxyz);
}

int main()
{
	int t;
	cin >> t;
	long long abcxyz[100];
	abcxyz[1] = 1;
	abcxyz[2] = 1;
	for (int i = 3; i <= 92; i++)
	{
		abcxyz[i] = abcxyz[i - 1] + abcxyz[i - 2];
	}
	while (t--)
	{
		int n;
		long long k;
		cin >> n >> k;
		cout << dat(n, k, abcxyz) << '\n';
	}
	return 0;
}