#include <bits/stdc++.h>
using namespace std;

int main()
{
	long t;
	cin>>t;
	long long int n[t];
	for (int i=0;i<t;i++)
	{
		cin>>n[i];
		if (n[i]%2!=0) cout<<"YES\n";
		else 
		{
			if (n[i]%3==0) cout<<"YES\n"; else cout<<"NO\n";
		}
	}
	
}
