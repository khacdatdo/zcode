/* code by T.A.N */
#include<bits/stdc++.h>
#define ll long long
const long int N=1e6+5;
const long int mod=1e9+7;
using namespace std;

int n,a[N];
void solve()
{
	cin>>n;
	for(int i=1 ; i<=n ; i++)	cin>>a[i];
	int dp[n+3];
	memset(dp,0,sizeof(dp));
	dp[1] = a[1];
	dp[2] = max(a[1] , a[2]);
	for(int i=3 ; i<=n ; i++)
	{
		dp[i] = max( dp[i-1] , dp[i-2] + a[i] );
	}
	cout<<dp[n]<<endl;
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