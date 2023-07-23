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
	// freopen("input", "r", stdin);
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	ll n, t;

	cin >> n >> t;

	ll a[n];

	fore(i,1,n){
		cin >> a[i];
	}

	for (int i = 1; i<=n; i+=a[i]){
		if (i == t){
			cout << YES;
			return 0;
		}
	}

	cout << NO;

	cout << endln;
	return 0;	
}