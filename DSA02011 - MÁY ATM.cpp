#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a, n) \
	;                  \
	vector<int> a(n);  \
	for (auto &z : a)  \
		cin >> z;
int n, a[31], S, res = 1e9;

void Try(int i, ll sum, int d)
{
	if (sum > S || d > res)
		return;
	if (i == n)
	{
		if (sum == S)
			res = min(res, d);
		return;
	}
	Try(i + 1, sum, d);
	Try(i + 1, sum + a[i], d + 1);
}
void solve()
{
	cin >> n >> S;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	res = 1e9;
	Try(0, 0, 0);
	if (res == 1e9)
		cout << -1;
	else
		cout << res;
	cout << "\n";
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}