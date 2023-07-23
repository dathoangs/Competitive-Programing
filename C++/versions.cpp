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

int digits(int64_t a){
	int r = 0;
	while (a) {r++; a/=10;}

	return r;
}

int main() {
	freopen("input", "r", stdin);
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	ll ones[20];
	ll res = 0, n;

	ones[0] = 0;
	ones[1] = 1;

	fore (i,2,18){
		ones[i] = ones[i-1]*10 + 1;
	}

	cin >> n;

	while(n){
		++res;
		int cur_dg = digits(n);
		ll b = n - ones[cur_dg];
		if (digits(b) == cur_dg) n = b;
		else {
			b = n - ones[cur_dg-1];
			if (digits(b) == cur_dg) break;
			n = b;
		}
	}

	cout << res;

	cout << endln;
	return 0;	
}