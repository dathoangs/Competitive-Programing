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

	ll a, n, tTien = 0, tBanh = 0;
	cin >> a >> n;

	if (n >= 11){
		ll tmp;
		tmp = (n/8)*11;
		tTien += (n/8) *8 *a;
		n -= tmp;
	} else if (n >= 5){
		ll tmp;
		tmp = (n/4)*5;
		tTien += (n/4) * 4 *a;
		n -= tmp;
	} else {
		tTien += n;
	}

	if (tTien >= a*8){
		tBanh += (tTien/(a*8))*11;
	} else if (tTien >= a*4){
		tBanh += (tTien/(a*4))*5;
	} else {
		tBanh += tTien / a;
	}

	cout << tTien << " " << tBanh;





	cout << endln;
	return 0;	
}