#include <bits/stdc++.h>
using namespace std;
int n, w, ans = 0;
vector <int> arr;
int main()
{
	cin>>w;
	cin>>n;
	for (int i = 0; i<n; i++)
	{
		int tmp;
		cin>>tmp;
		arr.push_back(tmp);
	}
	sort(arr.rbegin() , arr.rend());
	int i = 0;
	while (ans < w && i<n)
	{
		ans += arr[i];
		i++;
	}
	i--;
	ans -= arr[i];
	cout<<ans;
}
