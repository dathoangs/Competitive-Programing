#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,b,a) for(int i = b; i<a; i++)
#define null NULL
#define endln "\n"
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	ll t;
	cin >> t;

	while (t--){
		ll l, r, a, ans;

		cin >> l >> r >> a;
		ans = r;

		if (a > r){
			ans = r;
		} else {
			for (int i = r; i>l; i--){
				if (i%a == 0){
					ans = i-1;
					break;
				}
			}			
		}

		if (r/a + r%a > ans/a + ans%a){
			cout << r/a + r%a << endln;
		} else {
			cout << ans/a + ans%a << endln;
		}


	}


	cout << endln;
	return 0;	
}