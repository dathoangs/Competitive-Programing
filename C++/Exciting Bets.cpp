#include <bits/stdc++.h>
using namespace std;
int t, x, y, mx, mn, xmx, xmn, ymx, ymn;
double ans;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	cin >> t;
	
	for (int tt = 0; tt<t; tt++)
	{
		cin >> xmn >> ymn;
		if (xmn == ymn)
		{
			cout << 0 << " " << 0 << "\n";
			continue;
		}
		xmx = xmn;
		ymx = ymn;
		mx = 0;
		mn = 0;
		
		while (true)
		{
			ans = __gcd(xmx, ymx);
			if (ans == int(ans) && ans != 1){
				cout << ans << " " << mx << "\n";
				break;
			}
			else 
			{
				xmx++;
				ymx++;
				mx++;
			}
			
			if (xmn > 0 && ymn > 0)
			{
				ans = __gcd(xmn, ymn);
				if (ans == int(ans) && ans != 1){
					cout << ans << " " << mn << "\n";
					break;
				}
				else 
				{
					xmx--;
					ymx--;
					mn++;
				}					
			}
	
		}
	}
	
}


