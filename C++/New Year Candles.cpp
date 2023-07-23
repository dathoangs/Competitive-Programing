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

	ll a, b, tmp, ans = 0;

	cin >> a >> b;
	tmp = a;

	while (tmp >= b){
		ans += a;

		a = tmp;

		tmp = a/b;
		tmp += a%b;

		a /= b;
	}

	ans += a;

	cout << ans;

	cout << endln;
	return 0;	
}