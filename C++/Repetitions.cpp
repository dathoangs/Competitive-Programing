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

	ll ans = 1, mx = 1;
	string s;

	cin >> s;

	fore (i,1,s.length()){
		if (s[i] == s[i-1]){
			mx++;
			if (mx > ans){
				ans = mx;
			}
		} else {
			mx = 1;
		}
	}

	cout << ans;

	cout << endln;
	return 0;	
}