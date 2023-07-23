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

	ll q;

	cin >> q;

	while (q--){
		ll n;
		string s, t;

		cin >> n >> s >> t;

		fore(i,0,n){
			if (s[i] != t[i] && s[i] - ){
				if (s[i] == 'a' && s[i+1] == 'b'){
					swap(s[i], s[i+1]);
				} else if ()
			}
		}
	}

	cout << endln;
	return 0;	
}