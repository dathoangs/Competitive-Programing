#include <bits/stdc++.h>
#define int long long
#define ull unsigned long long
#define pb push_back
#define null NULL
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	int t;
	cin >> t;

	while (t--){
		int n, tmp;
		int ans1 = 0, ans2 = 0;
		cin >> n;
		vector <int> a;

		while (n--){
			cin >> tmp;
			a.pb(tmp);
		}

		sort (a.rbegin(), a.rend());

		for (int i = 0; i<a.size(); i++){
			if (ans1 > ans2){
				ans2 += a[i];
			} else {
				ans1 += a[i];
			}
		}

		if (ans1 > ans2){
			cout << ans1 << "\n";
		} else {
			cout << ans2 << "\n";
		}
	}


}

