#include<bits/stdc++.h>
using namespace std;

int n,f,k;
int gt (int n)
{
	if (n==1 || n==0) return 1;
	return n*gt(n-1);	
}

int main()
{
	n=5;
	for (int i=0;i<=n-1;i++)
	{
		for (int j=0;j<=i;j++)
			{
				cout<<gt(i)/(gt(j)*gt(i-j))<<" ";
			}
		cout<<"\n";
	}
}
