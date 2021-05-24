#include<bits/stdc++.h>
using namespace std;

char fibo(long long n,long long k,long long length[]){
	if(n==1) return '0';
	if(n==2) return '1';
	if(k>length[n-2]) return fibo(n-1,k-length[n-2],length);
	return fibo(n-2,k,length);
}

int main(){
	int t; cin>>t;
	while(t--){
	    long long n,k,length[93];
	    length[1]=1;
	    length[2]=1;
		for(int i=3;i<93;i++){
			length[i]=length[i-2]+length[i-1];
		}
		cin>>n>>k;
		cout<<fibo(n,k,length);
		cout<<endl;	
	}
	return 0;
}