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

	ll n, m, end = m, start = 0;

	cin >> n >> m;

	ll a[n], b[m];

	fore (i,0,n){
		cin >> a[i];
	}

	fore (i,0,m){
		cin >> b[i];
	}

	while (end){
		ll max = 0, pre;
		fore (i,0,m){
			if (a[start + b[i]] == a[i]){
				
			}
		}
	}

	cout << endln;
	return 0;	
}