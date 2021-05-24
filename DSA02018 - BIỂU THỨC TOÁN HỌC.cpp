/* code by T.A.N */
#include<bits/stdc++.h>
#define ll long long
const long int N=1e6+5;
const long int mod=1e9+7;
using namespace std;

int a[10], vt[10];
vector <int> u;
vector < vector <int> > res;
bool ok, p[10];

void init()
{
	for(int i=0 ; i<5 ; i++)	cin>>a[i];
	for(int i=0 ; i<10 ; i++)
	{
		vt[i] = 0;
		p[i] = false;
	}
	ok = false;
}
void quayxe()
{
	for(int i=1 ; i<=3 ; i++)
	{
		u.push_back(i);
		if( u.size() == 4 )
		{
			res.push_back(u);
		}
		else quayxe();
		u.pop_back();
	}
}
bool check()
{
	for(int i=0 ; i<res.size() ; i++)
	{
		int s = a[vt[0]];
		for(int j=0 ; j<4 ; j++)
		{
			if(res[i][j] == 1)	s += a[vt[j+1]];
			if(res[i][j] == 2)	s -= a[vt[j+1]];
			if(res[i][j] == 3)	s *= a[vt[j+1]];
		}
		if( s == 23 )	return true;
	}
	return false;
}
void Try(int i)
{
	if(ok)	return;
	for(int j=0 ; j<5 ; j++)
	{
		if( !p[j] )
		{
			vt[i] = j;
			p[j] = true;
			if( i == 4 )
			{
				if( check() )
				{
					ok = true;
					return;
				}
			}
			else Try(i+1);
			p[j] = false;
		}
	}
}
void solve()
{
	init();
	Try(0);
	if( ok )	cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	u.clear();
}

int main()
{
	quayxe();
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