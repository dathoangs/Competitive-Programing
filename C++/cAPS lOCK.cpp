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
	ll chk = 0;

	cin >> s;

	fore (i,0,s.length()){
		if (s[i] < 97){
			chk++;
		}
	}

	if (chk == s.length()){
		fore (i,0,s.length()){
			cout << (char)tolower(s[i]);
		}
	} else if(chk == s.length()-1 && s[0] >= 97){
		cout << (char)toupper(s[0]);
		fore (i,1,s.length()){
			cout << (char)tolower(s[i]);
		}		
	} else {
		cout << s;
	}

	cout << endln;
	return 0;	
}