#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int t, a, b, c, mx, ans;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	cin >> t;
	
	while (t--){
		cin >> a >> b >> c;
		
		mx = 2*(abs(a-b));
		
		if (a>mx || b>mx || c>mx){
			ans = -1;
		}else{
			ans = c + mx/2;
			if (ans > mx){
				ans = c - mx/2;
			}
		}
		
		cout << ans << "\n";
	}
}


