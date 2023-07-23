#include<bits/stdc++.h>
using namespace std;
string ten[100];
int height[100];
bool cmp(pair<string, int> a,pair<string, int> b)
{
	return a.second>b.second;
}
int main(){
	int n=4,k=2;
	
	pair<string, int> a[100];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i].first>>a[i].second;
	}
	sort(a,a+n,cmp);
	cout << a[k-1].first<<a[k-1].second;
	
}
