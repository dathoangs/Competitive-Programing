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

	int n,q;
	cin>>n>>q;
	int a[n+1],  prefix[n+2]={0};
	for(int i=0; i<n; i++) {
		cin>>a[i];
		prefix[i] = prefix[i-1] + a[i];

	}

	ll ans = 0;

	while (q--){
		ll l, r;
		cin >> l >> r ;

		ans += prefix[r] - prefix[l-1];

	}

	cout << ans;

	cout << endln;
	return 0;	
}