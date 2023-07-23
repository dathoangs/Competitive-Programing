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

	ll n, k;
	cin >> n;

	ll a[n+1];

	fore (i,1,n+1){
		cin >> k;
		a[k] = i;
	}

	fore(i,1,n+1){
		cout << a[i] << " ";
	}

	cout << endln;
	return 0;	
}