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

	ll n, mx = 0, tmp = 0;

	cin >> n;

	ll a[n+1];

	fore(i,0,n){
		cin >> a[i];
	}

	a[n] = INT_MIN;

	fore (i,0,n){
		if (a[i] <= a[i+1]){
			tmp++;
		} else {
			tmp++;
			if (mx < tmp){
				mx = tmp;
			}
			tmp = 0;
		}
	}

	cout << mx;


	cout << endln;
	return 0;	
}