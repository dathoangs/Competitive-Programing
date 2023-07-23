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

	char curr = s[0];

	ll mx = 1;	

	for (ull i = 1; i < s.length(); i++){
		if (s[i] == curr){
			mx++;
		} else {
			mx = 1;
			curr = s[i];
		}

		if(mx >= 7){
			cout << "YES";
			return 0;
		}		
	}

	cout << "NO";

	cout << endln;
	return 0;	
}