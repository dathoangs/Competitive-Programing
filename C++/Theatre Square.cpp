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

	ll n, m, a, ans, w=1;

	cin >> n >> m >> a;

	ans = ceil(n*1.0/a)*ceil(m*1.0/a);

	while(ans/=10){
		w++;
	}


	cout << setw(w) << setprecision(0) << fixed << ceil(n*1.0/a)*ceil(m*1.0/a);

	cout << endln;
	return 0;	
}