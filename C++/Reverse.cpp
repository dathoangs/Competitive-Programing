#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
// #define for(a,i) for(int i = 0; i<a; i++)
#define size(a) a.size()
#define length(a) a.length()
#define null NULL
#define endln "\n"
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	ll t;
	cin >> t;

	while (t--){
		ll n;
		cin >> n;
		vector <ll> a(n+7);

		for (int i = 0; i<n; i++){
			cin >> a[i];
		}

		ll mn_post, swp_post;
		for (int i = 0; i<n; i++){
			if (a[i] > i+1){
				ll mn = INT_MAX;
				swp_post = i;
				for (int j = i; j<n; j++){
					if (a[j] < a[i] && a[j] < mn){
						mn_post = j;
						mn = a[j];
					}
				}
				break;
			}
		}

		while (mn_post != )

		for (int i = 0; i<n; i++){
			cout << a[i] << " ";
		}
		cout << endln;

	}	
}