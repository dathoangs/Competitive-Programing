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
		ll n, ans = 0, chk = 1;
		cin >> n;
		vector <ll> a(n);

		fore(i,0,n){
			cin >> a[i];
		}

		while (chk){
			chk = 0;
			fore(i,0,n-1){
				if (a[i] - a[i+1] > 0){
					fore (j,0,n){
						if (a[j] == a[i]){
							a[j] = 0;
						}
					}
					ans+=1;
					chk = 1;
				}
			}			
		}


		cout << ans << endln;
	}

	cout << endln;
	return 0;	
}