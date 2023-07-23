#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int xa, xb, ya, yb, ans, n, t;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	cin >> n >> t;
	char a[n+7][n+7];
	int pre[n+7][n+7];
	
	for (int i = 0; i<n+7; i++){
		for (int j = 0; j<n+7; j++){
			pre[i][j] = 0;
		}
	}
	
	for(int i = 1; i<=n; i++){
		for(int j = 1; j<=n; j++){
			cin >> a[i][j];
			pre[i][j] = pre[i][j-1];
			if (a[i][j] == '*'){
				pre[i][j]++;
			}
		}
	}
	
	while (t--){
		cin >> xa >> ya;
		cin >> xb >> yb;
		ans = 0;
		
		for (int i = xa; i<=xb; i++){
			ans += pre[i][yb] - pre[i][ya-1];
		}
	
		cout << ans << "\n";
	}
	
}


