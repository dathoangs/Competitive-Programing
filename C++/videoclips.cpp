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
	freopen("output", "w", stdout);
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	ll n, v1 = INT_MAX, v2 = INT_MAX, i1, i2, it, a;
	cin >> n;

	fore(i,0,n){
		cin >> a;

		if (a > v2){
			cout << i1 << " " << i2 << " " << i;
		}

		if (a < v1){
			it = i;
			v1 = a;
		}

		if (a > v1 && a < v2){
			i1 = it;
			i2 = i;
			v2 = a;
		}

	}


	cout << endln;
	return 0;	
}