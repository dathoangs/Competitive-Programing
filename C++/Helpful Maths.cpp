#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define for(a,i) for(ll i = 0; i<a; i++)
#define size(a) a.size()
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
	}

	sort(all(a));

	for (size(a), i){
		cout << a[i];
		if (i < size(a)-1){
			cout << "+";
		}
	}
}