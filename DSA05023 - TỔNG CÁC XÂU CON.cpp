/* code by T.A.N */
#include<bits/stdc++.h>
#define ll long long
const long int N=1e6+5;
const long int mod=1e9+7;
using namespace std;

string s;
void solve()
{
	cin>>s;
	ll n = 0, sum = 0;
	for(int i=0 ; i<s.length()-1 ; i++)
	{
		ll x = s[i] - 48;
		n = x;
		sum += n;
		for(int j=i+1 ; j<s.length() ; j++)
		{
			ll k = s[j] - 48;
			n = n*10 + k;
			sum += n;
		}
	}
	ll x = s.length() - 1;
	ll k = s[x] - 48;
	sum += k;
	cout<<sum<<endl;
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