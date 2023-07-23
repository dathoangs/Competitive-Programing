#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define null NULL
#define endln "\n"
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	ll a, b, n, ans = 0;
	cin >> a >> b >> n;

	for (int i = a; i<=b; i++){
		if (i%2 != 0 && i%n == 0){
			ans++;
		}
	}
	cout << ans;
}