#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,b,a) for(int i = b; i<a; i++)
#define null NULL
#define nl '\n'
#define yes "YES\n"
#define no "NO\n"
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	ll t; cin >> t;
	while (t--){
		string s;
		cin >> s;

		if (s[0] != 'e' && s[0] != 's' && s[0] != 'Y') {
			cout << no;
			continue;
		}

		char pre = s[0];
		bool chk = true;

		fore (i,1,s.length()){
			if (pre == 'Y' && s[i] == 'e') {
				pre = s[i];
				continue;
			}

			if (pre == 'e' && s[i] == 's') {
				pre = s[i];
				continue;
			}

			if (pre == 's' && s[i] == 'Y') {
				pre = s[i];
				continue;
			}			

			
			chk = false;
			break;			
		}

		if (chk) cout << yes;
		else cout << no;
	}
}