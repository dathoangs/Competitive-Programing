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

	ll n, bro1 = 0, bro2 = 0, ans = 0;

	cin >> n;

	vector <ll> a(n);

	fore(i,0,n){
		cin >> a[i];
		bro2 += a[i];
	}

	sort (rall(a));

	fore (i,0,n){
		if (bro1 <= bro2){
			bro1 += a[i];
			bro2 -= a[i];
			ans++;
		}
	}

	cout << ans;

	cout << endln;
	return 0;	
}