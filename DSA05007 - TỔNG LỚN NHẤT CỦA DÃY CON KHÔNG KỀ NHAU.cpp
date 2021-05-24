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
	for(int i=0 ; i<n ; i++)	cin>>a[i];
	ll sum[n+3];
	memset(sum , 0 , sizeof(sum));
	sum[0] = a[0];
	sum[1] = max( a[1] , a[0] );
	for(int i=2 ; i<n ; i++)
	{
		sum[i] = max( sum[i-2] + a[i] , sum[i-1] );
	}
	cout<<sum[n-1]<<endl;
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