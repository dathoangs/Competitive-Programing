#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,chk=0,a,b;
	cin>>a>>b;
	for (int j=a;j<=b;j++)
		{
			for (int i=sqrt(j);i>1;i--)
			{
				if(j%i==0) 
				{
					chk++;
					break;
				}
			}
			if (chk == 0 && j!=1) cout<<j<<" ";
			chk=0;
		}
}
