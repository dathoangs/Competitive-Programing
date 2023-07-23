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

	int mp[26] = {0};

	string pat = "ueoaiy";

	fore(i,0,pat.length()){
		mp[pat[i] - 97] = 1;
	}

	ll n, ans = 0;

	cin >> n;

	string s;

	fore(nn,0,n){
		cin >> s;

		fore(i,0,s.length()-1){
			if(mp[i] == mp[i+1]){
				if (mp[i+1] == 1){
					s[i+1] = 'z';
					ans++;
				} else {
					s[i+1] = 'a';
					ans++;
				}
			}
		}

	}

	cout << ans;


	cout << endln;
	return 0;	
}