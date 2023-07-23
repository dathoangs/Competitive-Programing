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

	ll t;

	cin >> t;

	while (t--){
		ll n, ans = 0;
		cin >> n;

		int a[n];

		fore (i,0,n){
			cin >> a[i];
		}

		fore(i,0,n-1){
			fore(j,i+1,n){
				if ((a[i]&a[j]) >= (a[i]^a[j])){
					ans++;
				}
			}
		}

		cout << ans << endln;
	}

	cout << endln;
	return 0;	
}