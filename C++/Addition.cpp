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
	freopen("input", "r", stdin);
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	ll n;

	while (cin >> n){
		if (n == 0){
			break;
		}

		ll ans = 0;
		string a, b, s;

		cin >> a >> b >> s;

		for (ll i = n-1; i>=0; i--){

			if (s[i] == 's'){
				continue;
			}


			if (a[i]-48 + b[i]-48 == 10){
				if (((a[i-1]-48 + b[i-1]-48)%10)+1 != (s[i-1]-48)%10){
					cout << "b " << a[i-1] << " " << b[i-1] << " " << s[i-1] << endln;

					a[i-1] = 's';
					b[i-1] = 's';
					s[i-1] = 's';					
					ans++;					
				}
			} else if ((a[i]-48 + b[i]-48)%10 != (s[i]-48)%10){
				cout << "a " << a[i] << " " << b[i] << " " << s[i] << endln;

				a[i] = 's';
				b[i] = 's';
				s[i] = 's';	
				ans++;
			}

		}


		for (ll i = n-1; i>=0; i--){

			

		}

		cout << ans << endln;

	}

	cout << endln;
	return 0;	
}