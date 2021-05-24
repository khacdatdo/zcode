/* code by T.A.N */
#include<bits/stdc++.h>
#define ll long long
#define fi first
#define se second
const long int N=1e6+5;
const long int mod=1e9+7;
using namespace std;
typedef pair <int, int> pp;

int n,m,k;
vector <int> ke[1005];
bool chuaxet[1005];
int color[1005];
void reset()
{
	for(int i=0 ; i<1005 ; i++)	chuaxet[i] = true;
}
void init()
{
	cin>>n>>m>>k;
	int u,v;
	memset(color,0,sizeof(color));
	for(int i=0 ; i<1005 ; i++)	ke[i].clear();
	for(int i=1 ; i<=m ; i++)
	{
		cin>>u>>v;
		ke[u].push_back(v);
		ke[v].push_back(u);
	}
	reset();
}
bool check(int u, int color_u)
{
	for(int i=0 ; i<ke[u].size() ; i++)
	{
		int v = ke[u][i];
		if( color_u == color[v] )	return false;
	}
	return true;
}
bool quayxe(int u)
{
	if( u == n+1 )	return true;
	for(int i=1 ; i<=k ; i++)
	{
		if( check(u , i) )
		{
			color[u] = i;
			if( quayxe(u+1) )	return true;
			color[u] = 0;
		}
	}
	return false;
}
void solve()
{
	init();
	if( quayxe(1) )	cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
//	ios_base::sync_with_stdio(0);cin.tie(0);
	return 0;
}

/* T.A.N */