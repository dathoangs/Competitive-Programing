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

	ll t, a, b, ans;

	cin >> t;

	while (t--){
		ll k = 0;
		cin >> a >> b;
		for (int i = 2; i*i<a; i++){
			if (a%i == 0 && i>b){
				k = i;
				ans = k-b;
				cout << 1;
				break;
			}
		}

		if (k == 0){
			if (a > b){
				ans = a-b;
				cout << 2;
			} else {
				ans = a-b%a;
				cout << 3;
			}
		}

		cout << ans << endln;

	}

	cout << endln;
	return 0;	
}