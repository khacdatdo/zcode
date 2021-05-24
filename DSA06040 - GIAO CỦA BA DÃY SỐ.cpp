#include<bits/stdc++.h>
using namespace std;

const int oo = 1e6+7;
int n1, n2, n3;
long long a[oo], b[oo], c[oo];


void init(){
	cin>>n1>>n2>>n3;
	for(int i=0; i<n1; i++)	cin>>a[i];
	for(int i=0; i<n2; i++)	cin>>b[i];
	for(int i=0; i<n3; i++)	cin>>c[i];

}


void process(){
	int i1=0, i2=0, i3=0;
	vector<long long> res;
	while(i1<n1 && i2<n2 && i3<n3){
		if(a[i1]==b[i2] && a[i1]==c[i3]){
			res.push_back(a[i1]);
			i1++;i2++;i3++;
		}
		else if(a[i1] < b[i2])	i1++;
		else if(b[i2] < c[i3]) 	i2++;
		else i3++;
	}
	if(res.size()==0) cout<<-1<<'\n';
	else{
		for(int i=0; i<res.size(); i++){
			cout<<res[i]<<' ';
		}
		cout<<'\n';
	}
}

int main(){
	long long t;
	cin>>t;
	while(t--){
		init();
		process();
	}
	return 0;
}