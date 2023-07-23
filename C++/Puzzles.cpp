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

	ll n, m, ans = INT_MAX;

	cin >> n >> m;

	vector <ll> a(m);
	fore(i,0,m){
		cin >> a[i];
	}

	sort (rall(a));

	for(ll i = 0; i<m-n; i++){
		if (ans > a[i] - a[i+n-1]){
			ans = a[i] - a[i+n-1];
		}
	}

	cout << ans;

	cout << endln;
	return 0;	
}