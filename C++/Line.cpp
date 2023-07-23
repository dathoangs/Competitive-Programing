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
	freopen("input", "r", stdin);
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	ll t;

	cin >> t;

	while (t--){
		ll n, ans = 0;
		vector <ll> final;
		string s;

		cin >> n >> s;

		fore (i,0,n){
			if (s[i] == 'L'){
				ans += i;
			} else {
				ans += n-i-1;
			}
		}

		fore (i,0,n){
			if (i<=n/2){
				while (s[i] != 'L'){
					i++;
				}
				
				ans -= i;
				ans += n-i-1;
				final.pb(ans);
			} else {
				while (s[i] != 'R'){
					i++;
				}
				ans -= n-i-1;
				ans += i;
				final.pb(ans);			
			}
		}

		ll tmp = final.size();




		// while (tmp < n){
		// 	final.pb(final[tmp-1]);
		// 	tmp++;
		// }

		fore (i,0,n){
			cout << final[i] << " ";
		}
		cout << endln;
	}

	cout << endln;
	return 0;	
}