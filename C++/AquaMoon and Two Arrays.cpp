#include <bits/stdc++.h>
using namespace std;
vector <int> a;
vector <int> b;
int tmp, t, n, ans;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	cin >> t;
	
	while (t--)
	{
		cin >> n;
		ans = 0;
		tmp = 0;
		
		a.resize(n+7, 0);
		b.resize(n+7, 0);
		
		for (int i = 0; i<n; i++){
			cin >> a[i];
			tmp += a[i];
		}
			
			
		for (int i = 0; i<n; i++){
			cin >> b[i];
			tmp -= b[i];
		}
			
		if (tmp != 0){
			cout << -1 << "\n";
			continue;
		}
			
		for (int i = 0; i<n; i++){
			if (a[i] == b[i])
				tmp++;
		}
		
		if (tmp == n){
			cout << 0 << "\n";
			continue;
		}
		
		for (int i = 0; i<n; i++){
			if (a[i] > b[i])
				ans += a[i] - b[i];
		}
		
		cout << ans << "\n";
		
		for (int i = 0; i<n; i++){
			
		}
	}
	
}


