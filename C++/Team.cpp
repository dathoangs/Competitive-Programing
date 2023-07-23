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
	
	ll n, ans = 0;
	cin >> n;
	while (n--){
		ll tmp, tong = 0;
		for (int i = 0; i<3; i++){
			cin >> tmp;
			tong +=tmp;
		}
		if (tong >= 2){
			ans++;
		}
	}
	cout << ans;
}