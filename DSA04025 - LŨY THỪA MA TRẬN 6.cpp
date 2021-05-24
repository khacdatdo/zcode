/* code by T.A.N */
#include<bits/stdc++.h>
#define ll long long
const long int N=1e6+5;
const long int mod=1e9+7;
using namespace std;

/*
	giong luy thua ma tran 1
*/

ll a[15][15], m[15][15];
int n,k;
void nhan( ll a[15][15], ll b[15][15] )		// nhan hai ma tran
{
	ll t[15][15];
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			t[i][j] = 0;
			for(int k=0 ; k<n ; k++)
			{
				ll tmp = ( ( a[i][k] % mod ) * ( b[k][j] % mod ) ) % mod;
				t[i][j] = ( t[i][j] % mod + tmp % mod ) % mod;
			}
		}
	}
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			a[i][j] = t[i][j];
		}
	}
}
void POW( ll a[15][15], int n )		// tinh luy thua ma tran
{
	if( n <= 1 )	return;
	POW(a,n/2);
	nhan(a,a);
	if( n % 2 != 0 )	nhan(a,m);
}
void solve()
{
	cin>>n>>k;
	ll res = 0;
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			cin>>a[i][j];
			m[i][j] = a[i][j];
		}
	}
	if( k == 1 )
	{
		for(int i=0 ; i<n ; i++)
		{
			res = ( res % mod + a[i][0] % mod ) % mod;
		}
		cout<<res<<endl;
		return;	
	}
	POW(a,k);
	for(int i=0 ; i<n ; i++)
	{
		res = ( res % mod + a[i][0] % mod ) % mod;
	}
	cout<<res<<endl;
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