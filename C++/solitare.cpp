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
	freopen("input", "r", stdin);
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	ll n, ans = 0;
	cin >> n;

	vector <ll> a(n);

	fore(i,0,n){
		cin >> a[i];
	}

	sort(all(a));

	for(int i = 0; i<n-1; i++){
		if ((a[i]&1) != (a[i+1]&1)){
			ans++;
		}
	}

	cout << ans+1;

	cout << endln;
	return 0;	
}