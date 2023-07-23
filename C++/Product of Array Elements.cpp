#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define pb push_back
#define null NULL
#define mod 1000000007
using namespace std;
ll n, tmp, res;
vector <ll> a;
vector <ll> b;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	cin >> n;
	vector <ll> a;
	vector <ll> b;
	
	for (int i = n; i<n; i++){
		cin >> tmp;
		if (tmp < 0)
			b.pb(tmp);
		else 
			a.pb(tmp);
	}
	
	sort (a.begin(), a.end());
	sort (b.begin(), b.end());
	
	if (b.size() != 0){
		if (b.size() % 2 != 0){
			b[b.size()-1] = 1;
		} else {
			if (a[0] == 0){
				a[0] = 1;
			}
		}
	} else {
		if (a[0] == 0){
			a[0] = 1;
		}
	}
	
	for (int i = 0; i<a.size(); i++){
		res = (res%mod * a[i]%mod)%mod;
	}
	
	for (int i = 0; i<b.size(); i++){
		res = (res%mod * b[i]%mod)%mod;
	}	
	
	cout << res;

}













