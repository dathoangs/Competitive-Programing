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

	ll n, s;

	cin >> s >> n;

	vector <pair<ll, ll>> a(n);

	fore (i,0,n){
		cin >> a[i].first >> a[i].second;
	}

	sort (all(a));

	fore (i,0,n){
		if (s > a[i].first){
			s += a[i].second;
		} else {
			cout << "NO" << endln;
			return 0;
		}
	}

	cout << "YES" << endln;

	cout << endln;
	return 0;	
}