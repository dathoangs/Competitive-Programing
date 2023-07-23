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

	ll n, b = 0, i = 0, s = 0;

	cin >> n;

	vector <pair<ll, ll>> ar(n);

	fore(i,0,n){
		ll tmp, tmp1;
		cin >> tmp >> tmp1;
		ar[i] = {tmp, tmp1};
	}

	fore(i,0,n){

		s += ar[i].first * ar[(i+1)%n].second - ar[(i+1)%n].first * ar[i].second;

		if (ar[i].first == ar[(i+1)%n].first || ar[i].second == ar[(i+1)%n].second){
			b += abs(ar[i].first - ar[(i+1)%n].first) + abs(ar[i].second - ar[(i+1)%n].second);	
		} else {
			b += abs(__gcd(ar[i].first - ar[(i+1)%n].first, ar[i].second - ar[(i+1)%n].second));			
		}
	}

	s = abs(s);

	i = (s - (b-2))/2;

	cout << i+b;

	cout << endln;
	return 0;	
}