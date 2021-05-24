/* code by T.A.N */
#include<bits/stdc++.h>
#define ll long long
const long int N=1e6+5;
const long int mod=1e9+7;
using namespace std;

int n;
ll merge( ll a[] , int l, int m , int r )
{
	int n1 = m-l+1;
	int n2 = r-m;
	ll L[n1+3] , R[n2+3];
	
	for(int i=0 ; i<n1 ; i++)	L[i] = a[l + i];
	for(int i=0 ; i<n2 ; i++)	R[i] = a[m + 1 + i];
	
	ll ans = 0;
	int i,j,k;
	i = 0;
	j = 0;
	k = l;
	while( i < n1 && j < n2 )
	{
		if( L[i] <= R[j] )
		{
			a[k] = L[i];
			i++;
		}
		else
		{
			a[k] = R[j];
			j++;
			ans += n1 - i;
		}
		k++;
	}
	while( i < n1 )
	{
		a[k++] = L[i];
		i++;
	}
	while( j < n2 )
	{
		a[k++] = R[j];
		j++;
	}
	
	return ans;
}
ll MergeSort(ll a[] , int l, int r)
{
	ll ans = 0;
	if( l < r )
	{
		int m = l + (r - l)/2;
		ans += MergeSort(a,l,m);
		ans += MergeSort(a,m+1,r);
		ans += merge(a,l,m,r);
	}
	return ans;
}
void solve()
{
	cin>>n;
	ll a[n+3];
	for(int i=0 ; i<n ; i++)	cin>>a[i];
	cout<<MergeSort(a,0,n-1)<<endl;
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