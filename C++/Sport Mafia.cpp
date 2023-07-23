#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define null NULL
#define endln "\n"
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	ll n, k, i = 0;

	cin >> n >> k;

	if (k == 0){
		while (((i+1)*i)/2 + i < n){
			i++;
		}
		cout << ((i+1)*i)/2;		
	} else {
		while (((i+1)*i)/2 < k){
			i++;
		}

		while (i+(((i+1)*i)/2 - k) != n){
			i++;
		}
		cout << ((i+1)*i)/2 - k;

	}



}