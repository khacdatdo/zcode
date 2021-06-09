
#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
const long int N = 1e6 + 5;
const long int mod = 1e9 + 7;
using namespace std;
typedef pair<int, int> pp;

int n;
int a[1005], inOder[1005], preOder[1005];
int k;
void init()
{
	k = 0;
	memset(a, 0, sizeof(a));
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> inOder[i];
		a[inOder[i]] = i;
	}
	for (int i = 0; i < n; i++)
		cin >> preOder[i];
}
void quayxe(int start, int end)
{
	if (start > end)
		return;
	int pos = a[preOder[k++]];
	quayxe(start, pos - 1);
	quayxe(pos + 1, end);
	cout << inOder[pos] << " ";
}
void solve()
{
	init();
	quayxe(0, n - 1);
	cout << endl;
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

