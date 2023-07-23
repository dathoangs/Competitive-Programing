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
	// freopen("input", "r", stdin);
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	ll t;

	cin >> t;

	while (t--){
		ll n, s, ans = 0, mx = 0;

		cin >> n >> s;
		vector <ll> a(n);

		fore (i,0,n){
			cin >> a[i];
			mx = max(mx, a[i]);
		}

		sort (all(a));

		for (int i = 0; i<a.size(); ){
			if (ans >= s){
				break;
			}

			if (a[i] != i+1){
				a.insert(a.begin()+i, i+1);
				ans += i+1;
			} else {
				i++;
			}
		}

		while (ans < s){
			ans += a.size()+1;
			a.pb(a.size()+1);
		}

		// fore(i,0,a.size()){
		// 	cout << a[i] << " ";
		// }

		if (ans > s){
			cout << "NO" << endln;
		} else {
			bool chk = false;

			fore(i,0,a.size()){
				if (a[i] != i+1){
					chk = true;
					break;
				}
			}

			if (chk){
				cout << "NO" << endln;
			} else {
				cout << "YES" << endln;
			}
		}


	}

	cout << endln;
	return 0;	
}