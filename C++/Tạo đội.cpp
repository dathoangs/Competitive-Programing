#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,a,b) for(int i = a; i<b; i++)
#define null NULL
#define endln "\n"
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	ll n, m, tmp, ans = 0;
	string s;
	map <string, ll> mp;

	cin >> n >> m;

	fore(i,0,n){
		cin >> s >> tmp;
		map [s] = tmp;
	}

	fore(i,0,m){
		cin >> s;
		ans += map[s];
	}

	cout << ans;
}