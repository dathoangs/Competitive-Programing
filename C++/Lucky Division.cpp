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

	for (int i = 1; i<=n; i++){
		if (n%i == 0){
			ll tmp = i;
			bool chk = true;

			while (tmp){
				if (tmp%10 != 4 && tmp%10 != 7){
					chk = false;
					break;
				}
				tmp /= 10;
			}

			if (chk){
				cout << "YES\n";
				return 0;
			}
		}
	}

	cout << "NO" << endln;
	return 0;	
}