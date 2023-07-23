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

	ll t;

	cin >> t;

	while (t--){
		ll mx = 0, cost = 0;
		string s;

		char start;

		cin >> s;

		vector <char> a;
		map <char, queue<ll>> mp, mp2;
		vector <ll> ans, ans2;

		start = s[0];

		fore (i,0,s.length()){
			a.pb(s[i]);
			mp[s[i]].push(i);
		}

		sort(rall(a));

		int pos = 0;

		while (a[pos] > start){
			pos++;
		}

		for(int i = pos; i<s.length(); i++){
			if (i < s.length()-1){
				cost += a[i] - a[i+1];
			}
			

			mx++;
			ans.pb(mp[a[i]].front());
			mp[a[i]].pop();
		}

		cout << cost << " " << mx << endln;
		fore(i,0,ans.size()){
			cout << ans[i] + 1 << " ";
		}
		cout << endln;

	}

	cout << endln;
	return 0;	
}