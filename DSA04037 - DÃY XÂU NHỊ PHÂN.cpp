/* code by T.A.N */
#include<bits/stdc++.h>
#define ll long long
const long int N=1e6+5;
const long int mod=1e9+7;
using namespace std;


ll n,k;
ll f[95];
void init()
{
	cin>>n>>k;
	f[1] = f[2] = 1;
	for(int i=3 ; i<93 ; i++)	f[i] = f[i-2] + f[i-1];
}
void solve()
{
	init();
	while( n > 2 )
	{
		if( k <= f[n-2] )	n -= 2;
		else
		{
			k -= f[n-2];
			n -= 1;
		}
	}
	if( n == 2 )	cout<<"1"<<endl;
	else cout<<"0"<<endl;
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