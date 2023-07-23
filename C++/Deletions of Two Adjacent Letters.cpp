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

	ll t;
	cin >> t;

	while (t--){
		string s;
		char c;
		int chk = 0;

		cin >> s >> c;

		if (s.length() == 1){
			if (c != s[0]){
				cout << "NO\n";
				continue;
			} else {
				cout << "YES\n";
				continue;
			}
		}

		for (int i = 0; i < s.length(); i+=2){
			if (c == s[i]){
				chk++;
				break;
			}
		}

		if (chk == 0){
			cout << "NO\n";
		} else {
			cout << "YES\n";
		}


	}

	cout << endln;
	return 0;	
}