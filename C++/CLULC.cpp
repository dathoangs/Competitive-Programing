#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define null NULL
#define endln "\n"
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	vector <ll> a;
	ll tmp;

	while (cin >> tmp){
		a.pb(tmp);
		cin >> tmp;
		a.pb(tmp);
		cin >> tmp;
		a.pb(tmp);

		sort(a.begin(), a.end());

		if (a[0] + a[1] == a[2]){
			cout << "yes" << endln;
		} else {
			cout << "no" << endln;
		}


		a.clear();
	}		





}