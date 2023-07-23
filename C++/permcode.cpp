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
	freopen("input", "r", stdin);
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	ll x;

	while (cin >> x){
		if (x == 0){
			break;
		}

		string s, p, m, ans;

		map <char, ll> mps, mpp;

		char cd;

		ll n;

		cin >> s >> p >> m;

		fore(i,0,s.length()){
			mps[s[i]] = i;
			mpp[p[i]] = i;
		}

		n = m.length();

		ll d = (int)(pow(n, 1.5) + x)%n;

		cd = p[mps[m[d]]];

		ans.pb(cd);

		for(int i = d; i>0; i--){
			ans.insert(ans.begin(), p[mps[ans[0]] ^ mps[m[i-1]]]);
		}

		ll tmp = ans.length();
		ans.pb(p[mps[ans[0]] ^ mps[m[m.length()-1]]]);

		for (int i = m.length()-2; i>=tmp; i--){
			ans.insert(ans.begin() + tmp, p[mps[ans[tmp]] ^ mps[m[i]]]);
		}

		cout << ans << endln;
	}

	cout << endln;
	return 0;	
}