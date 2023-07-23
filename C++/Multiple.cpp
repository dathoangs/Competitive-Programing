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

	ll n, r;

	cin >> n >> r;

	vector<int> a(n);
	vector<int> p;
	map <int, bool> chk;

	fore (i,0,n){
		cin >> a[i];
	}

	for (int msk = 1; msk<(1<<n); i++){
		ll mult = 1;
		int flg = 0;

		fore(i,0,n){
			if(msk & (1<<i)){
				flg^=1;
				mult = (mult*a[i])/__gcd(mult, a[i]);
			}
			int cur = r / mult;
			if (flg) ans+= cur; else 
		}
	}



	cout << endln;
	return 0;	
}