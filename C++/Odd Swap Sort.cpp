#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define size(a) a.size()
#define length(a) a.length()
#define null NULL
#define endln "\n"
using namespace std;

bool chk(vector <ll> a, int n){
	for (int i = 0; i<n; i++){
		if (a[i] > a[i+1]);
		return 0;
	}
	return 1;
}

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	ll t;

	cin >> t;

	while (t--){
		ll n, chk_pnt = 0;

		cin >> n;
		vector <ll> a(n+7);

		for (int i = 0; i<n; i++){
			cin >> a[i];
		}

		ll le = 0, chan = 0;
		for (int i = 0; i<n; i++){
			if (a[i] % 2 != 0){
				le++;
			} else {
				chan++;
			}
		}

		if (le >= chan){
			cout << "YES" << endln; 
		} else {
			cout << "NO" << endln;
		}

	}
	
}