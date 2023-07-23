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
		ll n;

		cin >> n;

		vector <ll> a(n);

		fore(i,0,n){
			a[i] = i+1;
		}

		if (n == 1){

		} else if (n%2 == 0){
			for (int i = n-1; i>=0; i-=2){
				swap(a[i], a[i-1]);
			}			
		} else {
			for (int i = n-1; i>=1; i-=2){
				swap(a[i], a[i-1]);
			}
		}

		fore (i,0,n){
			cout << a[i] << " ";
		}

		cout << endln;
	}

	cout << endln;
	return 0;	
}