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

	ll n, m, a, b, t = 1;

	cin >> n >> m;
	
	cin >> a;
	b = a;

	fore (i,1,m){
		cin >> a;
		if (a < b){
			t++;
		}
		b = a;
	}

	cout << t * n - 1 - (n-a);

	cout << endln;
	return 0;	
}