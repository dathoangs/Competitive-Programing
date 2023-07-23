#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,b,a) for(int i = b; i<a; i++)
#define null NULL
#define endln "\n"
#define NO "NO\n"
#define YES "YES\n"
using namespace std;

int main() {
	freopen("input", "r", stdin);
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	ll t;

	cin >> t;

	while (t--){
		ll n, chk, br = 0;

		cin >> n;
		chk = n;

		vector <ll> a(n), b(n);

		map <string, bool> mp;

		fore(i,0,n){
			cin >> a[i];			
		}

		while (chk){
			fore(i,0,n){
				if (a[i] == i+1){
					b[i] = 0;
					chk--;
				} else {
					b[i] = a[a[i]-1];
				}
			}

			a = b;

			string tmp;			

			for (int i = 0; i<n; i++){
				tmp += to_string(a[i]);
			}

			cout << tmp << " ";
			


			

			mp[tmp] = true;
			if (mp[tmp]) {break;}
		} 



		if (chk == 0){
			cout << "All can eat.\n";
		} else {
			cout << "Some starve.\n";
		}
	}


	cout << endln;
	return 0;	
}