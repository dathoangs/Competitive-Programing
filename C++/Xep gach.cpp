#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define null NULL
#define endln "\n"
using namespace std;

struct Comp{
  bool operator()(const pair<ll, ll> &a, const pair<ll, ll> &b) {
    if (a.first != b.first) {
      return a.first < b.first;
    }
    return a.second > b.second;
  }
};

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	pair <ll, ll> pa;

	vector <pair <ll, ll>> a;

	int n;

	cin >> n;

	while (n--){
		ll tmp;

		cin >> tmp;
		pa.first = tmp;
		cin >> tmp;
		pa.second = tmp;

		a.pb(pa);
	}

	sort (a.rbegin(), a.rend(), Comp());

	// ll tong = 0;

	// for (ll i = 0; i<(ll)a.size(); i++){
	// 	tong += a[i].first * ((i+1) - 1) + a[i].second * (a.size() - (i+1));
	// }

	// cout << tong;

	for (int i = 0; i< (int)a.size(); i++){
		cout << a[i].first << " " << a[i].second << " ";
	}

	
}