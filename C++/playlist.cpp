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
	freopen("input", "r", stdin);
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	ll n, k;

	cin >> n >> k;

	vector <ll> a(n);

	fore(i,0,n){
		cin >> a[i];
	}

	sort (rall(a));

	if (n == 1){
		if (a[0]-k < 0){
			cout << a[0]*a[0]/2;
		} else {
			cout << (a[0]+k)*(a[0]-k+1)/2;
		}
	} else {
		if (a[0] == a[1]){
			cout << a[0]*k;
		} else {
			ll ans = 0;
			ans = (k/(a[0]-a[1]+1))*((a[0]+a[1])*(a[0]-a[1]+1)/2);
			fore(i,0,k%(a[0]-a[1]+1)){
				ans += a[0] - i;
			}
			cout << ans;
		}
	}

	cout << endln;
	return 0;	
}