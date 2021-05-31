#include <bits/stdc++.h>
using namespace std;

int BS(int a[], int l, int r, int value)
{
	int mid = -1;
	while (l <= r)
	{
		mid = (r + l) / 2;
		if (a[mid] == value)
			return mid;
		else if (a[mid] < value)
			l = mid + 1;
		else
			r = mid - 1;
	}
	if (a[mid] == value)
		return mid;
	return -1;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		int a[n + 5];
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		if (BS(a, 1, n, k) == -1)
			cout << "NO\n";
		else
			cout << BS(a, 1, n, k) << '\n';
	}
	return 0;
}