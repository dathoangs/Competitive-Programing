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

	ll n, chk = 0, ans = 0;

	cin >> n;	

	ll a[n+5];

	for (int i = 0; i<n; i++){
		cin >> a[i];
	}

	ans = a[0];

	ll tmp;

	for (int i = 1; i<n; i++){
		if (a[i] < a[i-1]){
			a[i] = a[i-1] + a[i-1]%a[i];
		}

		ans += a[i] - a[i-1];
	}


	cout << ans;

	cout << endln;
	return 0;	
}