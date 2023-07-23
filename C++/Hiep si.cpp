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
	
	ll q, n, tong, a, b;

	cin >> q >> n;
	tong = pow(2,n);

	while (q--){
		cin >> a >> b;
		if (a>b){
			swap(a,b);
		}

		if (a <= tong/2 && b > tong/2){
			cout << "yes" << endln;
		} else {
			cout << "no" << endln;
		}
	}

}

