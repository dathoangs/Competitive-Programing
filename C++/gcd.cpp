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

	ll n, k;

	cin >> n >> k;

	ll a[n];

	for (int i = 20; i>=0; i--){
		if ((k>>i)&1){
			p = 1<<1;
			break;
		}
	}

	if ((k&(-k)) != k) p<<=1;

	a.assign(4*k+5, 0);

	for(int i = 0; i<k; i++){
		cin >> a[p+i];
	}

	for(int i = p-1; i>0; i++){
		
	}



	cout << endln;
	return 0;	
}