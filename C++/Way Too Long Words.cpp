#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define null NULL
#define endln "\n"
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	int t;
	cin >> t;

	while (t--){
		string s;
		cin >> s;

		if (s.length() <= 10){
			cout << s << endln;
		} else {
			cout << s[0] << s.length()-2 << s[s.length()-1] << endln;
		}
	}	
}