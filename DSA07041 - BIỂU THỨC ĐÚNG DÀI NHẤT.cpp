/* code by T.A.N */
#include<bits/stdc++.h>
#define ll long long
#define fi first
#define se second
const long int N=1e6+5;
const long int mod=1e9+7;
using namespace std;
typedef pair <int, int> pp;

string a;
void solve()
{
	cin>>a;
	stack <char> s;
	int dem = 0;
	for(int i=0 ; i<a.length() ; i++)
	{
		if( a[i] == '(' )
		{
			s.push(a[i]);
		}
		else if( a[i] == ')' && !s.empty() )
			{
				s.pop();
				dem += 2;
			}
	}
	cout<<dem<<endl;
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