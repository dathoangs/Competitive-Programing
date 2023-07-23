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

	map <char, bool> vowel;

	vowel['u'] = true;
	vowel['e'] = true;
	vowel['o'] = true;
	vowel['a'] = true;
	vowel['i'] = true;
	vowel['y'] = true;

	vowel['U'] = true;
	vowel['E'] = true;
	vowel['O'] = true;
	vowel['A'] = true;
	vowel['I'] = true;
	vowel['Y'] = true;	

	cin >> s;

	fore(i,0,s.length()){
		if (!vowel[s[i]]){
			cout << "." << (char)tolower(s[i]);
		}
	}



	cout << endln;
	return 0;	
}