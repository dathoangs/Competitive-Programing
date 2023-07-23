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
		ll n, tmp, mx = INT_MIN;
		vector <ll> a;
		vector <ll> b;
		bool chk = true;

		cin >> n;

		fore(i,0,n){
			cin >> tmp;
			a.pb(tmp);
		}

		fore(i,0,n){
			cin >> tmp;
			b.pb(tmp);
		}

		fore(i,0,n){
			if (a[i] < b[i]){
				chk = false;
				break;
			}
			mx = max(mx, a[i] - b[i]);

		}

		if (mx == INT_MIN || mx < 0 || chk == false){
			cout << "NO" << endln;
		} else {
			fore(i,0,n){
				a[i] -= mx;
				if (a[i] < 0) a[i] = 0;
				if (a[i] != b[i]){
					chk =  false;
					cout << "NO\n";		
					break;
				}
			}
		}

		if (chk == true){
			cout << "YES\n";
		}



	}

	cout << endln;
	return 0;	
}