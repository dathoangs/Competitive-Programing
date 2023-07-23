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

	cout << n << " ";

	while (n != 1){
		if (n % 2 != 0){
			n = n*3+1;
		} else {
			n /= 2;
		}

		cout << n << " ";
	}

	cout << endln;
	return 0;	
}