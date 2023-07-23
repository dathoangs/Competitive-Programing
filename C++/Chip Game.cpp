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
		ll n, m;

		cin >> n >> m;

		if (n % 2 != 0){
			if (m % 2 != 0){
				cout << "Tonya" << endln;
			} else {
				cout << "Burenka" << endln;
			}
		} else {
			if (m % 2 == 0){
				cout << "Tonya" << endln;
			} else {
				cout << "Burenka" << endln;
			}
		}
	}

	cout << endln;
	return 0;	
}