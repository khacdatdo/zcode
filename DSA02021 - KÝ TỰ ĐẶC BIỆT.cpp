/* code by T.A.N */
#include<bits/stdc++.h>
#define ll long long
const long int N=1e6+5;
const long int mod=1e9+7;
using namespace std;

string s;
ll k;
void solve()
{
	cin>>s;
	cin>>k;
	ll n = s.length();
	while( n < k )	n *= 2;
	while( n > s.size() )
	{
		if( k > n/2 )
		{
			k -= n/2;
			if( k > 1 )	k -= 1;
			else k = n/2;
		}
		n/=2;
	}
	cout<<s[k-1]<<endl;
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