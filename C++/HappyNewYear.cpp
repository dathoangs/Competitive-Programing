#include<bits/stdc++.h>
using namespace std;

int main()
{
	long t;
	cin>>t;
	long long int n[t];
	for (int i=0;i<t;i++)
	{
		cin>>n[i];
		int a=n[i]/1000,b=n[i]%1000%100%10;
		if ((a/2)<b) cout<<"NO\n";
		else cout<<"YES\n";
	}
	
}
