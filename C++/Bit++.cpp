#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define null NULL
#define endln "\n"
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	ll t, ans = 0;
	cin >> t;

	while (t--){
		ll pre = 0;
		string s;
		cin >> s;
		for (int i = 0; i<3; i++){
			pre += s[i];
		}

		if (pre == 174){
			ans++;
		} else {
			ans--;
		}
	}

	cout << ans;

}