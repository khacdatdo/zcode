/* code by T.A.N */
#include<bits/stdc++.h>
#define ll long long
const long int N=1e6+5;
const long int mod=1e9+7;
using namespace std;

int n,a[1005],k;
void solve()
{
	cin>>n>>k;
	for(int i=0 ; i<n ; i++)	cin>>a[i];
	int dp[1005];
	memset(dp,0,sizeof(dp));
	dp[0] = 1;
	for(int i=1 ; i<=k ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			if( i >= a[j] )
			{
				dp[i] = ( dp[i] + dp[ i - a[j] ] ) % mod;
			}
		}
	}
	cout<<dp[k]<<endl;
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