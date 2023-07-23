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
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	ll t;

	cin >> t;

	while (t--){
		ll n, m;

		cin >> n >> m;

		map <int, int> chk;

		vector <ll> a;
		vector <char> str(m, 'B');

		fore (i,0,n){
			ll tmp;
			cin >> tmp;
			tmp--;
			if (chk[tmp] < 2){
				a.pb(tmp);
				chk[tmp]++;				
			}
		}

		sort(all(a));

		fore (i,0,a.size()){
			if (m-1-a[i] < a[i]){
				if (str[m-1-a[i]] == 'B'){
					str[m-1-a[i]] = 'A';
				} else {
					str[a[i]] = 'A';
				}
			} else {
				if (str[a[i]] == 'B'){
					str[a[i]] = 'A';
				} else {
					str[m-1-a[i]] = 'A';
				}
			}
		}

		fore(i,0,m){
			cout << str[i];
		}

		cout << endln;


	}

	cout << endln;
	return 0;	
}