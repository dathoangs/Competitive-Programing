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
	
	string s;
	ll m;

	cin >> s;

	cin >> m;

	while (m--){
		ll l, r, chk = 0;

		cin >> l >> r;
		l--; r--;

		fore(i,0,r-l+1){
			if (s[l+i] != s[r-i]){
				chk++;
				break;
			}
		}

		if (chk == 0){
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}

	}

}
