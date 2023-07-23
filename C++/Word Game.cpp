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

		map <string, int> mp;

		cin >> n;

		string s[3][n];

		fore (i,0,3){
			fore (j,0,n){
				cin >> s[i][j];
				mp[s[i][j]]++;
			}
		}

		fore (i,0,3){
			ll point = 0;
			fore (j,0,n){
				if (mp[s[i][j]] == 1){
					point += 3;
				} else if (mp[s[i][j]] == 2){
					point += 1;
				}
			}

			cout << point << " ";
		}

		cout << endln;		


	}

	cout << endln;
	return 0;	
}