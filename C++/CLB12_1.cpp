#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n=6,x=3,tong;
	for (int i=n-2;i>1;i++)
		{
			tong+=(n-2)-i;
			if (tong>=x) break;
		}
	
}
