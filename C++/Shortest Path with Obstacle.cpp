#include <bits/stdc++.h>
using namespace std;
int xa, ya, xb, yb, xf, yf, ans, mx, mn, t;
int chk[1007][1007];

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	cin >> t;
	
	for (int tt = 0; tt<t; tt++)
	{
		cin >> xa >> ya;
		cin >> xb >> yb;
		cin >> xf >> yf;
		
		ans = abs(xa - xb) + abs(ya - yb);
		
		if (xa == xf && xb == xf)
		{
			if (ya > yb){
				mx = ya;
				mn = yb;
			} else {
				mx = yb;
				mn = ya;
			}
			if (yf > mn && yf < mx)
				ans += 2;
		}
		
		if (ya == yf && yb == yf)
		{
			if (xa > xb){
				mx = xa;
				mn = xb;
			} else {
				mx = xb;
				mn = xa;
			}
			if (xf > mn && xf < mx)
				ans += 2;
		}
		
		cout << ans << "\n";
	}
}


