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

	ll n, m;

	cin >> n >> m;

	vector <ll> a(n+1);
	vector <ll> l2r(n+1, 0), r2l(n+1, 0);

	fore (i,1,n+1){
		cin >> a[i];
	}

	fore (i,1, n+1){
		if (a[i] < a[i-1]){
			l2r[i] = l2r[i-1]+(a[i-1] - a[i]);
		} else {
			l2r[i] = l2r[i-1];
		}
	}

	for (int i = n-1; i>0; i--){
		if (a[i] < a[i+1]){
			r2l[i] = r2l[i+1]+(a[i+1] - a[i]);
		} else {
			r2l[i] = r2l[i+1];
		}
	}	

	// fore(i,1,n+1){
	// 	cout << l2r[i] << " ";
	// }

	// cout << endln;

	// fore(i,1,n+1){
	// 	cout << r2l[i] << " ";
	// }	

	// cout << endln;



	while (m--){
		ll x, y;

		cin >> x >> y;

		if (x > y){
			cout << r2l[y] - r2l[x] << endln;
		} else {
			cout << l2r[y] - l2r[x] << endln;
		}

	}

	cout << endln;
	return 0;	
}