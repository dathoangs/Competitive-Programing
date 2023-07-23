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

	ll n;

	cin >> n;

	while (n--){
		string s;
		cin >> s;
		
		fore(i,0,s.length()){
			s[i] = toupper(s[i]);
		}

		if (s == "YES"){
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}

	cout << endln;
	return 0;	
}