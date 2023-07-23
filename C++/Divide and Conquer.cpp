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
	// freopen("input", "r", stdin);
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	ll t;

	cin >> t;

	while (t--){
		ll n, sum = 0, all_mn = INT_MAX, tmp;

		cin >> n;

		vector <ll> a(n);

		fore (i,0,n){
			cin >> tmp;
			a[i] = tmp;
			sum += tmp;
			all_mn = min(all_mn, tmp);
		}

		if (sum & 1){
			ll ans = INT_MAX, tmp_ans, tmp_a, tmp_sum;

			fore (i,0,n){
				tmp_sum = sum;
				tmp_ans = 0;
				tmp_a = a[i];
				while (tmp_sum & 1){
					tmp_sum -= ceil(tmp_a/2.0);
					tmp_a /= 2;
					tmp_ans++;
				}

				ans = min(tmp_ans, ans);
			}

			cout << ans << endln;
 		} else {
			cout << 0 << endln;
		}


	}

	cout << endln;
	return 0;	
}