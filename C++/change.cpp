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

	ll n, mn = INT_MAX, p, q, ans;
	vector <int> a (n+5);

	cin >> n;

	fore (i,0,n){
		cin >> a[i];
		a[i] = abs(a[i]);

		if (mn >= a[i]){
			mn = a[i];
			q = i;
		}

	}

	p = q;

	while (a[p] == a[q]){
		p--;
	}

	p++;

	if (mn == 0){
		ans = pow(2,q-fp+1);
	} else {
		ans = q-p+2;
	}

	cout << ans;

	cout << endln;
	return 0;	
}