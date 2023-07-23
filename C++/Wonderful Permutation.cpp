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

int main() {
	// freopen("input", "r", stdin);
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	ll t;

	cin >> t;

	while (t--){
		ll n, k, ans = 0;
		cin >> n >> k;

		vector <ll> a(n);

		fore(i,0,n){
			cin >> a[i];
		}

		sort (a.begin(), a.begin()+k, greater<int>());

		for(int i = 0; i<k; i++){
			if (a[i] > k){
				for (int j = k; j<n; j++){
					if (a[j] <= k){
						swap(a[i], a[j]);
						ans++;
						break;
					}
				}
			} else if (a[i] == k){
				for (int j = k; j<n; j++){
					if (a[j] < k){
						swap(a[i], a[j]);
						ans++;
						break;
					}
				}
			}
		}
		cout << ans << endln;
	}

	cout << endln;
	return 0;	
}