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

	ll n, q;

	cin >> n >> q;
	vector <ull> a(n,0), sum(n+1,0);

	fore(i,1,n+1){
		cin >> a[i];
		sum[i] = sum[i-1] + a[i];
	}

	while (q--){
		ll a, b;
		cin >> a >> b;
		if (a > b){
			swap(a, b);
		}

		cout << sum[b] - sum[a-1] << endln;
	}

	cout << endln;
	return 0;	
}