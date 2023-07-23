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
		string s, ans = "";

		cin >> n >> s;

		reverse(all(s));

		fore (i,0,n){
			if (s[i] != '0'){
				string tmp = s.substr(i,1);
				ll tmp1 = stoi(tmp) + 96;
				ans += (char)tmp1;
			} else {
				string tmp = s.substr(i+1,2);
				reverse(all(tmp));
				ll tmp1 = stoi(tmp) + 96;
				ans += (char)tmp1;
				i+=2;
			}
		}

		reverse(all(ans));

		cout << ans << endln;
	}

	cout << endln;
	return 0;	
}