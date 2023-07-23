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
typedef __int128 t128;

int main() {
	freopen("input", "r", stdin);
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	int t;

	cin >> t;

	ll n, m, r1, r2;

	t128 r, p = 1e18;

	while (t--){
		cin >> n >> m;

		if (n < m) swap(n,m);

		r = (t128)n*(n+1)*(3*m-n+1)/6;

		r1 = r/p; r2 = r%p;

		if (r1 == 0) cout << r2 << endln;

		else cout << r1 << setw(18) << setfill('0') << r2 << endln;
	}

	cout << endln;
	return 0;	
}