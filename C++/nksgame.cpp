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

	ll n, ans = INT_MAX;

	cin >> n;

	vector <ll> a(n), b(n);

	fore (i,0,n){cin >> a[i];}
	fore (i,0,n){cin >> b[i];}

	sort(all(a));
	sort(all(b));

	ll i = 0; j = 0;	

	while (i<n || j<n){
		ans = min(ans, abs(a[i]+a[j]));

		
	}

	cout << endln;
	return 0;	
}