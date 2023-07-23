#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int t, n, tmp;
vector <int> a1, a2;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	cin >> t;
	
	while (t--){
		cin >> n;
		int a[n+7];
		bool chk = false;
		int ans;
		
		for (int i = 0; i<n; i++){
			cin >> a[i];
		}
		
		for (int i = 0; i<n-1; i++){
			if (a[i] > a[i+1]) {
				ans = n - i;
				chk = true;
				i++;
				tmp = 0;
				break;
			}
		}
		
		for (int i = 0; i<n; i++){
			if (i%2 == 0){
				a2.push_back(a[i]);
			}
			else {
				a1.push_back(a[i]);
			}
		}
		int tm = 0;
		if (a1.size() > a2.size()){
			a2.push_back(0);
			for (int i = 0; i<max(a1.size(), a2.size()); i++){
				tm += a1[i] - a2[i];
			}	
		}
			
		else {
			a1.push_back(0);
			
			for (int i = 0; i<max(a1.size(), a2.size()); i++){
				tm += a2[i] - a1[i];
			}
		}
			
			
	
		

		if (chk == true)
			cout << ans - tm << "\n";
		else 
			cout << 0 << "\n";
	}
	
}


