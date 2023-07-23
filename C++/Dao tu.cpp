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
	
	string n, ans;

	getline(cin, n);
	char tmp[n.length()];

	for (int i = 0; i<n.length(); i++){
		tmp[i] = n[i];
	}


	ans.clear();
	for (int i = 0; i<n.length(); i++){
		if (tmp[i] == ' '){
			reverse(ans.begin(), ans.end());
			cout << ans << " ";
			ans.clear();
		} else {
			ans.pb(tmp[i]);
		}
	}
	reverse(ans.begin(), ans.end());
	cout << ans;

}