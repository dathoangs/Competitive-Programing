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

	ll n, m, move = 0, chk = 0;

	cin >> n >> m;

	if (n % 2 == 0){
		move = n/2;
		n = move;
	} else {
		move = ceil(n/2.0);	
		n = move-1;
	}

	// cout << n << " " << move << endln;

	while (move % m != 0 && chk < n){
		move++;
		chk++;	
	}

	if (move % m == 0){
		cout << move;
	} else {
		cout << -1;
	}

	cout << endln;
	return 0;	
}