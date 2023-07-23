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

	string s;

	cin >> s;

	for (ull i = 0; i<s.length(); i++){
		if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
			cout << "YES";
			return 0;
		}
	}

	cout << "NO";

	cout << endln;
	return 0;	
}