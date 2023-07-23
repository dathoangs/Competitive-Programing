#include <bits/stdc++.h>
using namespace std;
vector <int> a;
int t, n, tmp, ans;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	cin >> t;
	
	for (int tt = 0; tt<t; tt++){
		cin >> n;
		a.resize(n+5);
		ans = 0;
		
		for (int nn = 1; nn<=n; nn++){
			cin >> a[nn];
		}
		
		for (int i = 1; i<=n-1; i++){
			for (int j = i+1; j<=n; j++){
				if (a[i]*a[j] == i+j){
					ans++;
				}
			}
		}
		
		cout << ans << "\n";
	}
}


