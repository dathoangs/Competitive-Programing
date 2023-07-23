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
		ull x, y, mid;

		cin >> x >> y;
		mid = max(x, y) * (max(x, y) - 1) + 1;

		if (x == y){
			cout << mid << endln;
		}

		if (x > y){
			if (x&1){
				cout << mid - (x-y) << endln;
			} else {
				cout << mid + (x-y) << endln;
			}
		}

		if (x < y){
			if (y&1){
				cout << mid + (y-x) << endln;
			} else {
				cout << mid - (y-x) << endln;
			}			
		}
	}

	cout << endln;
	return 0;	
}