/* code by T.A.N */
#include<bits/stdc++.h>
#define ll long long
const long int N=1e6+5;
const long int mod=1e9+7;
using namespace std;

int n;
struct data{
	int stt, fi, se;
};
bool cmp( data a, data b)
{
	return a.se > b.se;
}
void solve()
{
	cin>>n;
	data a[n+3];
	for(int i=0 ; i<n ; i++)	cin>>a[i].stt>>a[i].fi>>a[i].se;
	sort(a,a+n,cmp);
	int d = 0, res = 0;
	int f[1005] = {0};
	for(int i=0 ; i<n ; i++)
	{
		while( f[a[i].fi] && a[i].fi > 0 )	a[i].fi -= 1;
		if( !f[a[i].fi] && a[i].fi > 0 )
		{
			f[a[i].fi]	= 1;
			res += a[i].se;
			d++;
		}
	}
	cout<<d<<" "<<res<<endl;
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