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
		ll n, ans = 0;
		cin >> n;
		vector <ll> a(n+7);
		vector <ll> b(n+7);

		fore(i,0,n){
			cin >> a[i];
		}

		fore(i,0,n){
			cin >> b[i];
		}

		fore(i,0,n-1){
			ans += abs(a[i]-b[i+1]);
			ans += abs(b[i]-a[i+1]);
		}

		if ((abs(a[0]-b[0])) + (abs(a[n-1]-b[n-1])) > ans){
			cout << ans << endln;
		} else {
			cout << (abs(a[0]-b[0])) + (abs(a[n-1]-b[n-1])) << endln;
		}

	}

	cout << endln;
	return 0;	
}