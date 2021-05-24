#include<bits/stdc++.h>
using namespace std;

char Process(int n, long long i, long long len[]){
	if(n==1)	return 'A';
	if(n==2)	return 'B';
	if(i > len[n-2])	return Process(n-1, i-len[n-2], len);
	return Process(n-2, i, len);
}

int main(){
	int t;
	cin>>t;
	long long len[100];
	len[1] = 1; len[2] = 1;
	for(int i=3; i<=92; i++){
		len[i] = len[i-1] + len[i-2];
	}
	while(t--){
		int n;
		long long k;
		cin>>n>>k;
		cout<<Process(n, k, len)<<'\n';
	}
	return 0;
}	return 0;
}