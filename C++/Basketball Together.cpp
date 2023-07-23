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

	ll n, d, mem = 1, bigg = 0, ans = 0;

	cin >> n >> d;

	vector <ll> a(n,0);

	fore (i,0,n){
		cin >> a[i];
	}

	sort(all(a));

	bigg = a.size()-1;

	while (n > 0){
		while (mem <= n){
			if (a[bigg] * mem > d){
				ans++;
				break;
			} 	
			mem++;		
		}
		n -= mem;
		bigg-=1;
	}

	cout << ans;

	cout << endln;
	return 0;	
}