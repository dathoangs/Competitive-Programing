#include <bits/stdc++.h>
using namespace std;
int t, n;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	cin >> t;
	
	while (t--){
		cin >> n;
		
//		if (n == 1){
//			cout << 1 << "\n";
//			continue;
//		}
		
		int ans = 0, sum = 0, tmp = 1;
		
		while (sum<n){
			sum+=tmp;
			tmp += 2;
			ans++;
		}
		
//		if (sum - n != 0){
//			ans--;
//		}
		
		cout << ans << "\n";
	}
}


