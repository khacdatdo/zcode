/* code by T.A.N */
#include<bits/stdc++.h>
#define ll long long
const long int N=1e6+5;
const long int mod=1e9+7;
using namespace std;

int n,k,a[55];
void solve()
{
	cin>>n>>k;
	for(int i=0 ; i<n ; i++)	cin>>a[i];
	sort(a,a+n);
	int x = 0, y = 0;
	if( k > n/2 )
	{
		for(int i=n-1 ; i>=n-k ; i--)	x += a[i];
		for(int i=n-k-1 ; i>=0 ; i--)	y += a[i];
		if( x > y )	cout<<x-y<<endl;
		else cout<<y-x<<endl;
	}
	else
	{
		for(int i=0 ; i<k ; i++)	x += a[i];
		for(int i=k ; i<n ; i++)	y += a[i];
		if( x > y )	cout<<x-y<<endl;
		else cout<<y-x<<endl;
	}
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