/* code by T.A.N */
#include<bits/stdc++.h>
#define ll long long
const long int N=1e6+5;
const long int mod=1e9+7;
using namespace std;

string s;
//bool check;
int a[20], n;
ll ans;
void init()
{
//	check = false;
	cin>>s;
	n = s.length();
	for(int i=1 ; i<=n ; i++)	a[i] = 0;
}
void display()
{
	ll res = 0;
	for(int i=1 ; i<=n ; i++)
	{
		if( a[i] == 0 )
		{
			res = res*10 + ( s[i-1] - 48 );
		}
	}
	float k = (float)pow(res,1.0/3);
	int x = (int) k;
	if( pow(x,3) == res )
	{
		ans = max( ans , res );
//		check = true;
	}
	
}
void quayxe(int i)
{
	for(int j=0 ; j<=1 ; j++)
	{
		a[i] = j;
		if( i == n )	display();
		else quayxe(i+1);
	}
}
void solve()
{
	ans = 0;
	init();
	quayxe(1);
	if(ans)	cout<<ans<<endl;
	else cout<<-1<<endl;
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