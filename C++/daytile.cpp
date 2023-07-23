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

ll fibo[10000000], pre[10000000];


int main() {
	freopen("input", "r", stdin);
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	fore (i,0,10000000){
		if (i == 0 || i == 1){
			fibo[i] = 1;
		} else {
			fibo[i] = fibo[i-1] + fibo[i-2];
		}
		if (i == 0){
			pre[i] = fibo[i];
		} else {
			pre[i] = fibo[i] + pre[i-1];
		}
		
	}	

	ll t;

	cin >> t;

	while (t--){
		ll a, ans = 0, pre=0;
		int n;

		cin >> a >> n;

		cout << ans * pre[n] << endln;
	}

	return 0;	
}