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
		ll n;
		cin >> n;

		vector <int> a(n);

		fore(i,0,n){
			cin >> a[i];
		}

		fore(i,0,n){
			int times = 0, cntd = 0, cntu = 0;
			string s = "";

			cin >> times;
			cin >> s;
			fore (j,0,times){
				if (s[j] == 'U'){
					cntu++;
				} else {
					cntd++;
				}
			}
			cntu %= 10;
			cntd %= 10;

			while (cntu--){
				a[i]--;
				if (a[i] == -1){
					a[i] = 9;
				}				
			}

			while (cntd--){
				a[i]++;
				if (a[i] == 10){
					a[i] = 0;
				}				
			}

		}

		fore(i,0,n){
			cout << a[i] << " ";
		}

		cout << endln;

	}

	cout << endln;
	return 0;	
}