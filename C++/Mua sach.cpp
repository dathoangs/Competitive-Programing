#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m=10,n=5,dem;
	int a[n+5],b[10],c[10];
	int x=-1,y=-1;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		int rem=m-a[i];
		int l=i+1,r=n-1;
//		if ((a[l]+a[r])>m) break;
		int mid;
		while (l<=r)
		{
			mid=(l+r)/2;
			if (a[mid]>rem) r=mid-1;
			else l=mid+1;
		}
		if(a[i]+a[l-1]>m) continue;
		cout<<a[i]<<" "<<a[l-1]<<endl;
		
		
	}
	
//	int min=0,k=0;
//	for(int i=0;i<dem;i++)
//	{
//		
//		if(b[i]-a[i]<k) 
//		{
//			k=b[i]-a[i];
//			min=i;
//			
//		}
//	}
//	cout<<a[min]<<" "<<b[min];
//	
}
