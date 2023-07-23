#include <bits/stdc++.h>
using namespace std;
int ok(int mid)
{
	
}
int main()
{
	
	int n=5,l=1,r=n,mid,k=3;
	int a[n];
	for (int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	for (int i=0;i<n;i++)
	while (l<=r)
	{
		mid=(l+r)/2;
		if(a[mid]==k) cout<< mid;
		if(a[mid]>k) r=mid-1;
		else l=mid+1;
		 
	}
}
