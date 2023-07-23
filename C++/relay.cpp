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
string s;
map <char, bool> chk;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	cin >> s;

	for (int i = 0; i<s.size()/2; i++){
		chk[s[i]] = 1;
	}

	cout << endln;
	return 0;	
}