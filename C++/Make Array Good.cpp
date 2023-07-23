#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,b,a) for(int i = b; i<a; i++)
#define null NULL
#define endln "\n"
#define NO "NO\n"
#define YES "YES\n"
using namespace std;

int main() {
	freopen("input", "r", stdin);
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	ll t;

	cin >> t;

	while (t--){
		ll n;

		cin >> n;

		vector <ll> n;

		fore (i,0,n){
			cin >> a[i];
		}

		sort (rall(a));


		fore(i,0,n-1){
			vector <pair<ll, ll>> tmp;
			ll ans = 0;
			if (a[i] % a[i+1] != 0){
				ll old_a = a[i];
				while (a[i] % a[i+1] != 0){
					a[i+1]++;
					if (old_a == a){
						tmp.pb()
						old_a *= 2;
						ans++;
					}
				}
			}
		}
	}

	cout << endln;
	return 0;	
}