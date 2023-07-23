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
	
	int t;
	cin >> t;

	while (t--){
		ll a, b, c, new1;

		cin >> a >> b >> c;

		new1 = b-(c-b);
		if (new1 % a == 0 && (new1-b == b-c) && new1 >= a){
			cout << "YES\n";
			continue;
		}

		new1 = b-(a-b);
		if (new1 % c == 0 && (a-b == b-new1) && new1 >= c){
			cout << "YES\n";
			continue;			
		}	

		if ((a+c) % 2 == 0){
			new1 = (a+c) / 2;
			if (new1 % b == 0){
				cout << "YES\n";
				continue;				
			}
		}

		cout << "NO\n";		

	}
}