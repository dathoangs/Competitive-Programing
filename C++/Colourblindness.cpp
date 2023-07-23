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

	cin >> t;

	while (t--){
		ll n;
		string s1, s2;

		cin >> n >> s1 >> s2;

		fore (i,0,n){
			if (s1[i] == 'G' || s1[i] == 'B'){
				s1[i] = 'X';
			}
			if (s2[i] == 'G' || s2[i] == 'B'){
				s2[i] = 'X';
			}			
		}

		if (s1 == s2){
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}


	}

	cout << endln;
	return 0;	
}