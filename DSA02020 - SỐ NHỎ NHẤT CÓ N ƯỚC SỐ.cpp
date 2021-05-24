/* code by T.A.N */
#include<bits/stdc++.h>
#define ll long long
const long int N=1e6+5;
const long int mod=1e9+7;
using namespace std;

int prime[] = {2,3,5,7,11,13,17,19,23,29,31};
int n;
ll ans;
void init()
{
	cin>>n;
	ans = 1e18;
}
void quayxe(int i, ll dem , ll res)
{
	if( dem > n )	return;
	if( dem == n )	ans = min( ans , res );
	for(int j=1 ; ; j++)
	{
		if( res*prime[i] > ans )	break;
		res = res * prime[i];
		quayxe(i+1, dem*(j+1) , res);
	}
}
void solve()
{
	init();
	quayxe(0,1,1);
	cout<<ans<<endl;
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