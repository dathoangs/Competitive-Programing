#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
vector <bool> chk (2000,1);
vector <int> ans;
int t, k;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	for (int i = 1; i<=2000; i++){
		if (i % 3 == 0 || i % 10 == 3){
			chk[i] = 0;
		}
	}
	
	for (int i = 1; i<=2000; i++){
		if (chk[i] == 1){
			ans.push_back(i);
		}
	}
	
	cin >> t;
	
	while (t--){
		cin >> k;
		cout << ans[k-1] << "\n";
	}
}


