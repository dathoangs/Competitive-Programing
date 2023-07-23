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
	
	ll t, x, n, chk;

	cin >> t;
	while (t--){
		cin >> x >> n;

		if (x % 2 == 0){
			chk = n - (n/4 * 4);
			if (chk == 1){
				cout << x - n << endln;
			}

			if (chk == 2){
				n--;
				x-=n;
				n++;
				x+=n;
				cout << x << endln;
			}

			if (chk == 3){
				n-=2;
				x-=n;
				n++;
				x+=n;
				n++;
				x+=n;
				cout << x << endln;
			}

			if (chk == 0){
				n-=3;
				x-=n;
				n++;
				x+=n;
				n++;
				x+=n;
				n++;
				x-=n;
				cout << x << endln;
			}						
		} else {
			chk = n - (n/4 * 4);
			if (chk == 1){
				cout << x + n << endln;
			}

			if (chk == 2){
				n--;
				x+=n;
				n++;
				x-=n;
				cout << x << endln;
			}

			if (chk == 3){
				n-=2;
				x+=n;
				n++;
				x-=n;
				n++;
				x-=n;
				cout << x << endln;
			}

			if (chk == 0){
				n-=3;
				x+=n;
				n++;
				x-=n;
				n++;
				x-=n;
				n++;
				x+=n;
				cout << x << endln;
			}
		}
	}

}