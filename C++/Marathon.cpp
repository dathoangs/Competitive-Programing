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
		ll ans = 0, a, b;

		cin >> a;

		fore(i,0,3){
			cin >> b;
			if (b > a){
				ans++;
			}
		}

		cout << ans << endln;


	}

	cout << endln;
	return 0;	
}