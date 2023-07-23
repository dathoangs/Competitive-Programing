#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int t, l, r, m, n, a, b, c;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	cin >> t;
	
	while (t--){
		int mn = INT_MAX;
		cin >> l >> r >> m;
		for (int i = l; i<=r; i++){
			for (int j = l; j<=r; j++){
				for (int k = l; k<=r; k++){
					while (n*i+j-k != m && n*i+j-k <= m ){
//						cout << n*i+j-k << " ";
						if (n*i+j-k == m){
							if (mn > min(j, k)){
								mn = min(j, k);
								a = i; b = j; c = k;
							}
						}
						n++;
					}
					n = 0;
				}
			}
		}
		cout << a << " " << b << " " << c << "\n";
	}
	
	
}













