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
	
	int t;
	cin >> t;
	while (t--){
		int n;
		string s, ans;		
		cin >> n >> s;
		ans.pb(s[0]);

		for (int i = 0; i<n-1; i++){
			if (s[0] - s[1] == 0){
				break;
			}

			if (s[i] - s[i+1] >= 0){
				ans.pb(s[i+1]);
			} else {
				break;
			}
		}

		cout << ans;
		reverse(ans.begin(), ans.end());
		cout << ans;
		cout << endln;
	}
}