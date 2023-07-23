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

	ll n, q, cur = 0;

	cin >> n >> q;

	set <string> s(n*2), ans;

	string task;

	map <string, string> mp;

	for (int i = 0; i<n*2; i+=2){
		cin >> s[i] >> s[i+1];

		mp[s[i]] = s[i+1];
		mp[s[i+1]] = s[i];
	}

	cin >> task;

	fore(i,0,q){
		switch (task[i]){
			case 'F':{
				cur--;
				while (s[cur] == "0"){
					cur--;
				}
				break;
			}

			case 'B':{
				cur++;
				while (s[cur] == "0"){
					cur++;
				}				
				// cout << cur << endln;
				break;
			}

			case 'R':{
				// cout << cur << " " << s.size();
				if (cur+1 == s.size()){
					cur = 0;
				} else {
					s.pb(s[cur]);
					s[cur] = "0";
				}
				// fore(i,0,n*2){
				// 	cout << s[i] << " ";
				// }
				// cout << cur;
				// cout << endln;
				break;
			}

			case 'C':{
				vector<string>::iterator it = find(s.begin(), s.end(), mp[s[cur]]);

				if (cur+1 == s.size()){
					if (s[it+1-s.begin()] != s[cur]){
						s.insert(it+1, s[cur]);
						s.erase(s.begin()+cur);						
						cur = 0;
					}
				} else {
					s.insert(it+1, s[cur]);
					s[cur] = "0";
					if (it - s.begin() < cur){
						cur++;
						while (s[cur] == "0"){
							cur++;
						}
					}
				}	
				break;			
			}

			case 'P':{
				ans.pb(mp[s[cur]]);
				break;
			}
		}
	}

	if (ans.size() > 0){
		fore(i,0,ans.size()){
			cout << ans[i] << endln;
		}		
		cout << endln;		
	}

	fore(i,0,s.size()){
		if (s[i] != "0")
			cout << s[i] << endln;
	}

	cout << endln;
	return 0;	
}