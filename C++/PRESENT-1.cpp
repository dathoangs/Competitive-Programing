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

	ll ans = 0, t, m, n;
	cin >> t;

	while (t--){
		cin >> m >> n;

		if (m == 1){
			cout << 1 << endln;
			continue;
		}

		ans = n/3 * 2;

		if (n%3 != 0){
			ans++;
		}

		cout << ans << endln;

	}

	cout << endln;
	return 0;	
}