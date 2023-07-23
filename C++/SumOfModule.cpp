#include <bits/stdc++.h>
using namespace std;
long long int n, m, tmp, tmp1;
int t;

int main()
{
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	cin>>t;
	
	for (int tt = 0; tt<t; tt++){
		cin >> n;
		cin >> m;
		tmp = ((m-1)*(1+(m-1))) / 2;
		tmp1 = ((n%m)*(1+(n%m))) / 2;
		cout << tmp*(n/m) + tmp1 << "\n";
	}
}
