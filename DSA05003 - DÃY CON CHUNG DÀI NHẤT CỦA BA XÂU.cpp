/* code by T.A.N */
#include<bits/stdc++.h>
#define ll long long
const long int N=1e6+5;
const long int mod=1e9+7;
using namespace std;

int a,b,c;
string x;
string y;
string z;
int dp[105][105][105];
void solve()
{
	cin>>a>>b>>c;
	cin>>x;
	cin>>y;
	cin>>z;
	
	memset(dp, 0 , sizeof(dp));
	for(int i=1 ; i<=a ; i++)
	{
		for(int j=1 ; j<=b ; j++)
		{
			for(int k=1 ; k<=c ; k++)
			{
				if( x[i-1] == y[j-1] && y[j-1] == z[k-1] )	dp[i][j][k] = 1 + dp[i-1][j-1][k-1];
				else dp[i][j][k] = max( dp[i-1][j][k] , max( dp[i][j-1][k] , dp[i][j][k-1] ) );
			}
		}
	}
	cout<<dp[a][b][c]<<endl;
}

int main()
{
	int t;
	cin>>t;
//	cin.ignore();
	while(t--)
	{
		solve();
	}
//	ios_base::sync_with_stdio(0);cin.tie(0);
	return 0;
}

/* T.A.N */