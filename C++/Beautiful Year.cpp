#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define for(a,i) for(int i = 0; i<a; i++)
#define size(a) a.size()
#define length(a) a.length()
#define null NULL
#define endln "\n"
using namespace std;

bool distinct(ll n){
	map <ll, bool> mp;
	while (n != 0){
		ll tmp = n % 10;
		if (mp[tmp] == 0){
			mp[tmp] = 1;
		} else {
			return 0;
		}
		n/=10;
	}
	return 1;
}

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	ll n;

	cin >> n;

	do {
		n++;
	} while (distinct(n) == 0);

	cout << n;
}