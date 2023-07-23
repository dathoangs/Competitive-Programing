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

	ll n, q, tmp, x, y;
	vector <ll> a;
	vector <ll> pre;

	cin >> n >> q;

	fore(i,0,n){
		cin >> tmp;
		a.pb(tmp);
	}

	sort(rall(a));

	pre.pb(0);

	fore(i,1,n+1){
		pre.pb(pre[i-1]+a[i-1]);
	}

	while (q--){
		cin >> x >> y;

		cout << pre[x] - pre[x-y] << endln;
	}

	cout << endln;
	return 0;	
}