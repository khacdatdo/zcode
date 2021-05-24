/* code by T.A.N */
#include<bits/stdc++.h>
#define ll long long
const long int N=1e6+5;
const long int mod=1e9+7;
using namespace std;

int n;
void solve()
{
	cin>>n;
	queue <int> a;
	a.push(n);
	queue <int> c;
	c.push(0);
	set <int> s;
	s.insert(n);
	while( !a.empty() )
	{
		int x = a.front();
		a.pop();
		int y = c.front();
		c.pop();
		if( x == 1 )
		{
			cout<<y<<endl;
			return;
		}
		if( x-1 == 1 )
		{
			cout<<y+1<<endl;
			return;
		}
		else if( s.find(x-1) == s.end() )
			{
				a.push(x-1);
				c.push(y+1);
				s.insert(x-1);
			}
		for(int i=2 ; i*i<=x ; i++)
		{
			if( x%i == 0 && s.find(x/i) == s.end() )
			{
				a.push(x/i);
				c.push(y+1);
				s.insert(x/i);
			}
		}
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