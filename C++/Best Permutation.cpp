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
		ll n;

		cin >> n;

		if (n == 4){
			cout << 2 << " " << 1 << " " << 3 << " " << 4;
		} else {
			for (int i = n-2; i>3; i--){
				cout << i << " ";
			}

			cout << 2 << " " << 3 << " " << 1 << " " << n-1 << " " << n;
		}	

		cout << endln;

	}

	cout << endln;
	return 0;	
}