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
		ll n, m, ans = INT_MIN;

		cin >> n >> m;

		int a[n+2][m+2];

		fore(i,1,n+1){
			fore(j,1,m+1){
				cin >> a[i][j];
			}
		}

		fore(i,1,n+1){
			fore(j,1,m+1){
				ll pre = 0;
				fore(k,1,)
			}
		}

	}

	cout << endln;
	return 0;	
}