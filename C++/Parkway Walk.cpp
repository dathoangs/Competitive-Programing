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
		ll n, m, tmp, tong = 0;
		vector <ll> a;

		cin >> n >> m;

		fore(i,0,n){
			cin >> tmp;
			tong += tmp;
		}

		if (tong-m < 0){
			cout << 0 << endln;
		} else {
			cout << tong - m << endln;			
		}



	}

	cout << endln;
	return 0;	
}