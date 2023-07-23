#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define null NULL
#define endln "\n"
#define fore(a,b,c) for (int a = b; a<c; a++)
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	ll n, ans = 0, mx;
	cin >> n;
	vector <ll> a(n+7,0);

	fore (i,1,n+1){
		cin >> a[i];
	}

	ans += a[n];
	mx = a[n];
	for (int i = n-1; i>0; i--){
		if (a[i] < mx){
			ans += a[i];
			mx = a[i];
		} else {
			if (mx == 0){
				break;
			}
			ans += mx-1;
			mx--;
		}
	}

	cout << ans;


	cout << endln;
	return 0;
}