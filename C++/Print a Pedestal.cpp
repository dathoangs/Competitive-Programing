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
		ll n;
		cin >> n;

		if (n % 3 == 0){
			cout << n/3 << " " << n/3 +1 << " " << n/3 - 1 << endln;
		} else {
			vector <ll> a;
			ll nn = n;
			while (nn%3 != 0){
				nn++;
			}

			fore(i,0,3){
				a.pb(nn/3);
			}

			while (a[2] > 1 && a[0]+a[1]+a[2] > n){
				a[2]--;
			}

			while (a[1] <= a[0] && a[2] > 1){
				a[1]++;
				a[2]--;
			}

			while (a[0]+a[1]+a[2] > n){
				a[0]--;
			}

			while (a[0] >= a[1]){
				a[0]--;
				a[1]++;
			}


			fore (i,0,3){
				cout << a[i] << " ";
			}
			cout << endln;
		}
	}

	cout << endln;
	return 0;	
}