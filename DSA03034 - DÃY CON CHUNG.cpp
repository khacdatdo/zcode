#include<bits/stdc++.h>
using namespace std;
void input(long long n, long long *a){
	for(long long i=0;i<n;i++) cin >> a[i];
}
int main(){
	int t;cin >> t;
	while(t--){
		long long n1,n2,n3;
		cin >> n1 >> n2 >> n3;
		long long a[n1+10],b[n2+10],c[n3+10];
		input(n1,a);input(n2,b);input(n3,c);
		long long x=0,y=0,z=0;
		vector<long long > v;
		while(x<n1&&y<n2&&z<n3){
			if(a[x]==b[y]&&b[y]==c[z]){
				x++;y++;z++;
				v.push_back(a[x-1]);
			}
			else if(a[x]<b[y]) x++;
			else if(b[y]<c[z]) y++;
			else z++;
		}
		if(v.size()==0) cout << "NO" << endl;
		else{
		for(long long i=0;i<v.size();i++) cout << v[i] << " ";
		cout << endl;
		}
	}
}