/* code by T.A.N */
#include<bits/stdc++.h>
#define ll long long
const long int N=1e6+5;
const long int mod=1e9+7;
using namespace std;

int n,s,m;
void solve()
{
	cin>>n>>s>>m;
//	int x = s/n;
	int y = s - s/7;	// so ngay co the mua luong thuc
	int z = m*s;	// tong so luong thuc can dung
	for(int i=1 ; i<=y ; i++)
	{
		if( n*i >= z )
		{
			cout<<i<<endl;
			return;
		}
	}
	cout<<-1<<endl;
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