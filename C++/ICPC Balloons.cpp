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

	ll t;
	cin >> t;

	while (t--){
		ll n, ans = 0;
		string s;
		map <char, bool> chk; 

		cin >> n;
		cin >> s;

		fore(i,0,s.length()){
			if (chk[s[i]] == false){
				ans+=2;
				chk[s[i]] = true;
			} else {
				ans+=1;
			}
		}

		cout << ans << endln;
	}

	cout << endln;
	return 0;	
}