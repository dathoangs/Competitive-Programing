#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	cin>>a;
	
	while (a>1)
	{
		if (a%dem==0)
		{
			a/=dem;
			cout<<dem;
		}
		else dem++;
	}
}
