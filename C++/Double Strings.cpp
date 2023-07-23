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

	while(t--){
		ll n;
		cin >> n;

		vector <string> s(n);

		fore(i,0,n){
			cin >> s[i];
		}

		fore(i,0,n){
			bool chk = false;
			fore(j,0,n){
				if (j == i){
					continue;
				}

				if (s[i].find(s[j])){
					fore(k,0,n){
						if (k == j || k == i){
							continue;
						}

						if(s[i].find(s[k])){
							chk = true;
							break;
						}
					}					
				}

				if (chk == true){
					cout << 1;
				} else {
					cout << 0;
				}

			}
		}
		cout << endln;
	}

	cout << endln;
	return 0;	
}