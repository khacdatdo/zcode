/* code by T.A.N */
#include<bits/stdc++.h>
#define ll long long
const long int N=1e6+5;
const long int mod=1e9+7;
using namespace std;

int n,c[17][17];
bool chuaxet[227];
int x[227];
int s = 0;
int minn = 1e9 , cmin = 1e9;
void init()
{
	memset(chuaxet,true,sizeof(chuaxet));
	chuaxet[1] = false;	// vi bat dau di tai vi tri 1
	x[1] = 1;
	cin>>n;
	for(int i=1 ; i<=n ; i++)
	{
		for(int j=1 ; j<=n ; j++)
		{
			cin>>c[i][j];
			if( c[i][j] != 0 )
			{
				cmin = min(c[i][j] , cmin);
			}
		}
	}
}
void quayxe(int i)
{
	if( s + cmin*(n-i+1) >= minn )	return;
	for(int j=1 ; j<=n ; j++)
	{
		if( chuaxet[j] )
		{
			x[i] = j;
			chuaxet[j] = false;
			s += c[x[i-1]][j];
			if( i == n )
			{
				if( s+c[x[n]][x[1]] < minn )	minn = s+c[x[n]][x[1]];
			}
			else quayxe(i+1);
			s-=c[x[i-1]][j];
			chuaxet[j] = true;
		}
	}
}
void solve()
{
	init();
	quayxe(2);
	cout<<minn<<endl;
}

int main()
{
	solve();
//	ios_base::sync_with_stdio(0);cin.tie(0);
	return 0;
}

/* T.A.N */