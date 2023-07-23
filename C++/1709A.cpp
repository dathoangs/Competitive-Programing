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
		ll x, ans = 0;

		vector<int> a(4);

		cin >> x >> a[1] >> a[2] >> a[3];

		while (a[x] != 0){
			ans++;
			x = a[x];
		}

		if (ans == 2){
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}

	cout << endln;
	return 0;	
}