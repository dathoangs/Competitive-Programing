#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int t, n, ans;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	cin >> t;
	
	while (t--){
		cin >> n;
		if (n % 2 == 0){
			ans = n/2;
		} else {
			ans = (n+1)/2;
		}
		
		cout << ans << "\n";
	}
	
	
}


