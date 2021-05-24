#include<bits/stdc++.h>
using namespace std;
struct dta{
	int s,e;
};
string s;
vector<string> res;
vector<dta>a;
int b[100];
bool cmp (dta a,dta b)
{
	return a.s<b.s;
}
void Try( int i,int n)
{
	for(int j=0;j<=1;j++)
	{
		b[i]=j;
		if(i==n-1)
		{
			int d=-1;
			int ok[205]={0};
			for(int l=0;l<s.size();l++)
			{
				if(s[l]=='('&&b[++d]==0)
				{
					ok[a[d].s]=ok[a[d].e]=1;
				}
			}
			
				string tmp="";
				for(int i=0;i<s.size();i++)
					if(ok[i]==0) tmp+=s[i];	
				res.push_back(tmp);
			
		}
		else Try(i+1,n);
	
	}
}


main()
{
//	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>s;
	stack<int>stk;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='(') stk.push(i);
		else if(s[i]==')')
		{
			dta tg;
			tg.s=stk.top();
			tg.e=i;
			a.push_back(tg);
			stk.pop();	
		}
		
	}
	sort(a.begin(),a.end(),cmp);
	Try(0,a.size());
	sort(res.begin(),res.end());
	vector<string>ans;
	for(int i=0;i<res.size();i++)
	{
		if(res[i]==s) continue;
		if(ans.size()==0) ans.push_back(res[i]);
		else if(res[i]!=ans[ans.size()-1]) ans.push_back(res[i]);
		
	}
	for(int i=0;i<ans.size();i++)
	cout<<ans[i]<<endl;
	
}= res.begin(); it != res.end(); it++)
        if ((*it != *(it - 1) && it != res.begin()) || it == res.begin())
            cout << *it << endl;    
    
}