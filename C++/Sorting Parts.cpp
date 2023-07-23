#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define for(a,i) for(int i = 0; i<a; i++)
#define size(a) a.size()
#define length(a) a.length()
#define null NULL
#define endln "\n"
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	ll t, n;
	cin >> t;

	while (t--){
		cin >> n;
		vector <ll> a(n+7);

		for(n, i){
			ll tmp;
			cin >> tmp;
			a.pb(tmp);
		}

		for (n-1, i){
			vector <ll> b;
			b = a;

			sort (b.begin(), b.begin()+i);
			sort (b.begin()+i+1, b.end());

			for (n, j){
				cout << b[i] << " ";
			}
			cout << endln;
			if (b[i+1] <= b[i]){
				cout << "YES\n";
				break;
			}

			
		}
	}	
}