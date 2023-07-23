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

	ll tmp = 1;
	vector <ll> a;

	while (tmp<=1000000000){
		a.pb(tmp);
		tmp*=3;
	}

	// fore (i,0,a.size()){
	// 	cout << a[i] << " ";
	// }
	ll t;
	cin >> t;

	while (t--){
		int n;
		cin >> n;

		if (n>a.size()){
			cout << "NO" << endln;
		} else {
			cout << "YES" << endln;
			for (int i = 0; i<n; i++){
				cout << a[i] << " ";
			}
			cout << endln;
		}
	}

	cout << endln;
	return 0;	
}