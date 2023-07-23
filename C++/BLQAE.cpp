#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define null NULL
#define endln "\n"
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	ll n;
	cin >> n;

	while (n--){
		ll a, b;
		cin >> a >> b;

		if (a <= b) {
			if (a % 2 == 0 && b%2 == 0){
				cout << "YES" << endln;
				continue;
			}

			if (a % 2 != 0 && b%2 != 0){
				cout << "YES" << endln;
				continue;
			}

			if (a % 2 == 0 && b%2 != 0){
				cout << "NO" << endln;
				continue;
			}

			if (a%2 != 0 && b%2 == 0){
				if (a*2 <= b){
					cout << "YES" << endln;
				} else {
					cout << "NO" << endln;
				}
				continue;
			}			

		} else {
			cout << "NO" << endln;
		}

	}
}