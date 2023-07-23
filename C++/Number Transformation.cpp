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
		ll x, y, a = 0, b = 0;
		cin >> x >> y;

		if (x == y){
			cout << 1 << " " << 1 << endln;
		} else {
			if (x > y){
				cout << 0 << " " << 0 << endln;
			} else {
				b = y/x;
				if (b != y*1.0/x){
					cout << 0 << " " << 0 << endln;
				} else {
					while (x < y){
						x *= b;
						a++;
					}

					if (x == y){
						cout << a << " " << b << endln;
					} else {
						cout << 0 << " " << 0 << endln;
					}
				}
			}
		}



	}

	cout << endln;
	return 0;	
}