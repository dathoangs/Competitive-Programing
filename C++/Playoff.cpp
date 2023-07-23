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

	int t;
	cin >> t;

	while (t--){
		int n, ans = 0;
		cin >> n;

		for (int i = 1; i<=n; i++){
			ans += ((int)pow(2,i))/2;
		}

		cout << ans << endln;
	}

	cout << endln;
	return 0;	
}