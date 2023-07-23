#include <bits/stdc++.h>
using namespace std;
int t,n,ans,chia;

int solve(int n)
{
	switch (n / (chia/10)) 
		{
			case 1: ans += 1;break;
			case 2: ans += 2;break;
			case 3: ans += 3;break;
			case 4: ans += 4;break;
			case 5: ans += 5;break;
			case 6: ans += 6;break;
			case 7: ans += 7;break;
			case 8: ans += 8;break;
			case 9: ans += 9;break;
		}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		ans = 0;
		chia = 10;
		cin >> n;
		while (n % chia != n)
		{
			ans += 9;
			chia *= 10;
		}
		solve(n);
		cout << ans << "\n";
		
	}
}
