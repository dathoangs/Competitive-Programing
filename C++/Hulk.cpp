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
	// freopen("input", "r", stdin);
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	ll n;

	cin >> n;

	fore(i,0,n){
		if (i > 0){
			cout << " that ";
		}
		if (i%2 == 0){
			cout << "I hate";
		} else {
			cout << "I love";
		}
	}

	cout << " it";

	cout << endln;
	return 0;	
}