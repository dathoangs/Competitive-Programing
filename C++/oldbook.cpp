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

	ll n, k;
	string s;
	char mx = s[0], mn = s[0];

	cin >> n >> s >> k;

	fore(i,1,n){
		char mn = s[0];		
		if (n < k){
			fore(i,1,n){
				if (mn == 'a'){
					break;
				}
				if (mn > s[i]){
					mn = s[i];
				}
			}

			cout << s;
			fore(i,n,k){
				cout << mn;
			}
		} else {
			bool chk = false;
			fore(i,1,k){
				fore (j,1,25){
					if (s.find(s[i]+j) != -1){
						chk = true;
						s[i] = s[i]+j;
						break;
					}
				}
				if (chk == true){
					break;
				}
			}
			if (chk == false){
				fore (j,1,25){
					if (s.find(s[0]+j)){				
						s[0] = s[0]+j;
						break;
					}
				}				
			}
			fore(i,0,k){
				cout << s[i];
			}
		}
	}

	cout << endln;
	return 0;	
}