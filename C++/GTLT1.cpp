#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;
int main()
{
	int n=5,x=3,a[100],res=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		mp[a[i]]+=1;
	}
	for (int i=0;i<n;i++)
	{
		mp[a[i]]--;
		if (x%a[i]==0) res+= mp[x/a[i]];
		
	}
	cout<<res;
}
