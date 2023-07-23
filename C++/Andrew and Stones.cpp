#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(a,i) for(int i = 0; i<a; i++)
#define size(a) a.size()
#define length(a) a.length()
#define null NULL
#define endln "\n"
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	cin >> t;

	while (t--){
		ll ans = 0, times = 0;
		cin >> n;
		vector <ll> a(n+7);

		fore (n, i){
			ll tmp;
			cin >> tmp;
			a.pb(tmp);
		}

		for (int i = 1; i<n-1; i++){
			ans += a[i];
			times++;
		}

		if (a/times == 1){
			cout << "-1\n";
			continue;
		}

		if ((a%2 == 0 && times%2==0) || ((a%2 != 0 && times%2!=0))){
			
		}
	}	
}