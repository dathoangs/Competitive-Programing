#include<bits/stdc++.h>
using namespace std;
int t,n,tmp;
long long int a[110],b[110];

int main()
{
	cin>>t;
	for (int i=0;i<t;i++)
	{
		cin>>n;
		for (int j=0;j<n;j++)
		{
			cin>>a[j];
			b[a[j]]++;
		}
		for(int z=0;z<n;z++)
		{
			if (b[a[z]] == 1)
			{
				cout<<(z+1)<<"\n";
			}
			b[a[z]] = 0;
			a[z] = 0;
		}	
	}
	
}
