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
		ll a[2][2], tmp[2][2];
		bool chk = false;

		cin >> a[0][0] >> a[0][1] >> a[1][0] >> a[1][1];

		fore(i,0,4){
			if (a[0][0] < a[0][1] && a[1][0] < a[1][1] && a[0][0] < a[1][0] && a[0][1] < a[1][1]) {
				chk = true;
				break;
			}

			tmp[0][1] = a[0][0];
			tmp[1][1] = a[0][1];
			tmp[1][0] = a[1][1];
			tmp[0][0] = a[1][0];

			a[0][0] = tmp[0][0];
			a[0][1] = tmp[0][1];
			a[1][1] = tmp[1][1];
			a[1][0] = tmp[1][0];
		} 

		if (chk){
			cout << "YES" << endln;
		} else {
			cout << NO;
		}
	}

	cout << endln;
	return 0;	
}