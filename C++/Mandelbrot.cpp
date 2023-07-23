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

	double a, b;
	ll r, test = 1;

	while (cin >> a){
		cin >> b >> r;
		
		a = abs(a);
		b = abs(b);

		cout << "Case " << test << ": ";
		test++;

		if (a == 0 && b == a){
			cout << "IN\n";
		} else if(a > b){
			if (!(r&1)){
				cout << "OUT\n";
			} else {
				cout << "IN\n";
			}
		} else {
			if (!(r&1)){
				cout << "IN\n";
			} else {
				cout << "OUT\n";
			}			
		}
	}

	cout << endln;
	return 0;	
}