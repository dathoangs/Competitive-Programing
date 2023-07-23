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

	ll t;

	cin >> t;

	while (t--){
		ll n;
		string s;
		map <char,int> mp;

		cin >> n >> s;

		if (s.length() == 5){
			fore(i,0,5){
				mp[s[i]]++;
			}

			if (mp['T'] == 1 && mp['i'] == 1 && mp['m'] == 1 && mp['u'] == 1 && mp['r'] == 1){
				cout << "YES\n";
			} else {
				cout << "NO\n";
			}

		} else {
			cout << "NO\n";
		}


	}

	cout << endln;
	return 0;	
}