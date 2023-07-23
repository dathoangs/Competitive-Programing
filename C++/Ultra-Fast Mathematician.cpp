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

	string s1, s2;

	cin >> s1 >> s2;

	fore(i,0,s1.length()){
		if (s1[i] == s2[i]){
			cout << 0;
		} else {
			cout << 1;
		}
	}

	cout << endln;
	return 0;	
}