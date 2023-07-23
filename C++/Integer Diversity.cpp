#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define null NULL
#define endln "\n"
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	int t, n;

	cin >> t;
	while (t--){
		int ans = 0;
		map <int, int> mp;
		mp.clear();
		cin >> n;
		for (int i = 0; i<n; i++){
			int tmp;
			cin >> tmp;
			if (tmp < 0){
				tmp = -tmp;
			}
			if (tmp == 0){
				if (mp[0] == 0){
					ans++;
					mp[0] = 1;
				}				
			} else {
				if (mp[tmp] == 1){
					ans++;
					mp[tmp]++;					
				}				
				if (mp[tmp] == 0){
					ans++;
					mp[tmp]++;
				}

			}
		}
		cout << ans	<< endln;
	}
}