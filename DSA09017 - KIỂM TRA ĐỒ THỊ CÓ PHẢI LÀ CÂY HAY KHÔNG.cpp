
#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
const long int N = 1e6 + 5;
const long int mod = 1e9 + 7;
using namespace std;

int n, m;
vector<int> ke[1005];
bool chuaxet[1005];
vector<pair<int, int>> ans;
void reset()
{
	for (int i = 0; i < 1001; i++)
		ke[i].clear();
	memset(chuaxet, false, sizeof(chuaxet));
}
void BFS(int s)
{
	queue<int> q;
	q.push(s);

	while (!q.empty())
	{
		int u = q.front();
		q.pop();
		chuaxet[u] = true;

		int v;
		for (int i = 0; i < ke[u].size(); i++)
		{
			v = ke[u][i];
			if (!chuaxet[v])
			{
				q.push(v);

				chuaxet[v] = true;
			}
		}
	}
}
int dem()
{
	int d = 0;
	for (int i = 1; i <= n; i++)
	{
		if (!chuaxet[i])
		{
			d++;
			BFS(i);
		}
	}
	return d;
}
void canhcau(int canh, int res, vector<pair<int, int>> tmp)
{
	for (int i = 0; i < m; i++)
	{
		if (i != canh)
		{
			ke[tmp[i].fi].push_back(tmp[i].se);
			ke[tmp[i].se].push_back(tmp[i].fi);
		}
	}

	int count = dem();

	if (count > res)
	{
		if (tmp[canh].fi < tmp[canh].se)
			ans.push_back({tmp[canh].fi, tmp[canh].se});
		else
			ans.push_back({tmp[canh].se, tmp[canh].fi});
	}
}
void solve()
{
	int count = 0;
	reset();
	ans.clear();
	cin >> n;
	int u, v;
	vector<pair<int, int>> tmp;
	for (int i = 1; i <= n - 1; i++)
	{
		cin >> u >> v;
		tmp.push_back({u, v});
		ke[u].push_back(v);
		ke[v].push_back(u);
	}
	if (dem() != 1)
	{
		cout << "NO" << endl;
		return;
	}
	int res = dem();

	for (int i = 1; i <= n - 1; i++)
	{
		reset();
		canhcau(i, res, tmp);
	}

	count = ans.size();
	if (count == n - 1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
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
