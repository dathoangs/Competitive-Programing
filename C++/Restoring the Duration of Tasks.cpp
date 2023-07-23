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
		ll n, tmp;
		vector <ll> s;
		vector <ll> f;

		cin >> n;

		fore (i,0,n){
			cin >> tmp;
			s.pb(tmp);
		}

		fore (i,0,n){
			cin >> tmp;
			f.pb(tmp);
		}

		vector <int> ans(n,0);

		cout << f[0] - s[0] << " ";

		fore(i,1,n){
			if (s[i] < f[i-1]){
				if (f[i] - f[i-1] > 0){
					cout << f[i] - f[i-1] << " ";
				}
			} else {
				cout << f[i] - s[i] << " ";
			}
		}


		cout << endln;

	}

	cout << endln;
	return 0;	
}