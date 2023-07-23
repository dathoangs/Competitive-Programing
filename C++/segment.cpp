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

	ll n, c = 0;

	vector <pair<int, bool>> a;

	cin >> n;

	fore(i,0,n){
		ll x, y;
		cin >> x >> y;
		a.pb({x, 0});
		a.pb({y, 1});
	}

	sort (all(a));

	
	fore(i,0,n*2){
		
	}

	cout << endln;
	return 0;	
}