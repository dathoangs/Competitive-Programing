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
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	ll n;

	cin >> n;
	vector <ll> a(n+7);

	fore(i,0,n)
		cin >> a[i];

	fore (i,0,n){
		if (a[i] < 38){
			cout << a[i] << endln;
		} else {
			if (a[i] % 10 >= 3 && a[i] % 10 <= 5){
				cout << a[i] + (5 - a[i] % 10) << endln;
			} else {
				if (a[i] % 10 > 7){
					cout << a[i] + (10 - a[i] % 10) << endln;
				} else {
					cout << a[i] << endln;
				}
			}
		}
	}

	cout << endln;
	return 0;	
}