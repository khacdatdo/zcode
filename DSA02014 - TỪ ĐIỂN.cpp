/* code by T.A.N */
#include<bits/stdc++.h>
#define ll long long
const long int N=1e6+5;
const long int mod=1e9+7;
using namespace std;

int k,m,n;
bool chuaxet[10][10], check;
char a[10][10];
string s[105];
vector <string> res;
int X[] = {-1,-1,-1,0,0,1,1,1};	// hai mang the hien 8 huong duyet
int Y[] = {-1,0,1,-1,1,-1,0,1};

void init()
{
	cin>>k>>n>>m;
	for(int i=0 ; i<k ; i++)	cin>>s[i];
	for(int i=1 ; i<=n ; i++)
	{
		for(int j=1 ; j<=m ; j++)	cin>>a[i][j];
	}
}
void quayxe(int i, int j, string ans)
{
	for(int p=0 ; p<k ; p++)
	{
		if( s[p] == ans )	res.push_back(ans); 
	}
	for(int p=0 ; p<8 ; p++)	// duyet theo 8 huong
	{
		int x,y;
		x = i + X[p];
		y = j + Y[p];
		if( x>=1 && y>=1 && x<=n && y<=m && chuaxet[x][y] )
		{
			chuaxet[x][y] = false;
			quayxe(x,y,ans + a[x][y]);
			chuaxet[x][y] = true;
		}
		
	}
}
void solve()
{
	init();
	for(int i=1 ; i<=n ; i++)
	{
		for(int j=1 ; j<=m ; j++)
		{
			memset(chuaxet,true,sizeof(chuaxet));
			string b = "";
			chuaxet[i][j] = false;
			quayxe(i,j,b + a[i][j]);
		}
	}
	if( !res.size() )	cout<<-1<<endl;
	else
	{
		for(int i=0 ; i<res.size() ; i++)	cout<<res[i]<<" ";
		cout<<endl;
	}
	res.clear();
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