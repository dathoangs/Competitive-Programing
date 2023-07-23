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
	cin >> t ;

	while (t--){
		bool chk = false;
		string s;

		cin >> s;

		if (s[0] != 'Y' && s[0] != 'e' && s[0] != 's'){
			chk = true;
		}		

		fore(i,0,s.length()-1){
			if (s[i] != 'Y' && s[i] != 'e' && s[i] != 's'){
				chk = true;
				break;
			}

			if (s[i] == 'Y' && s[i+1] != 'e'){
				chk = true;
				break;
			}

			if (s[i] == 'e' && s[i+1] != 's'){
				chk = true;
				break;
			}

			if (s[i] == 's' && s[i+1] != 'Y'){
				chk = true;
				break;
			}
		}

		if (chk){
			cout << "NO" << endln;
		} else {
			cout << "YES" << endln;
		}
	}

	cout << endln;
	return 0;	
}