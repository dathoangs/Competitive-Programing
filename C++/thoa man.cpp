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
	map <ll,ll> mp;

	ll tmp, n, t;

	cin >> n;

	fore(i,0,n){
		cin >> tmp;
		mp[tmp]++;
	}

	cin >> t;

	while (t--){
		ll l, r, ans = 0;

		cin >> l >> r;
		r++;
		
		fore(i,l,r){
			ans += mp[i];
		}

		cout << ans << " ";
	}

}