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
		ll a, b, c;

		cin >> a >> b >> c;

		if ( b < c ){
			if (a-1 < ((c-b) + (c-1))){
				cout << 1 << endln;
			} else if (a-1 > ((c-b) + (c-1))){
				cout << 2 << endln;
			} else {
				cout << 3 << endln;
			}			
		} else {
			if ( a-1 < ((b-c) + (c-1)) ){
				cout << 1 << endln;
			} else if (a-1 > ((b-c) + (c-1))){
				cout << 2 << endln;
			} else {
				cout << 3 << endln;
			}			
		}

	}

	cout << endln;
	return 0;	
}