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

	ll n, t, digits = 1, tmp;
	cin >> n >> t;

	tmp = t;
	while (tmp/10){
		digits++;
		tmp/=10;
	}

	if (digits > n){
		cout << -1;
	} else if (t != 10){
		fore(i,0,n){
			cout << t;
		}		
	} else {
		cout << 1;
		fore(i,0,n-1){
			cout << 0;
		}		
	}



	cout << endln;
	return 0;	
}