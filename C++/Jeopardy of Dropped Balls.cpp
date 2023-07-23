#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int n, m, k, c;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	cin >> n >> m >> k;
	int a[n+7][m];
	for (int i = 0; i<n; i++){
		for (int j = 0; j<m; j++){
			cin >> a[i][j];
		}
	}
	
	while (k--){
		cin >> c;
		int i = 0, j = c;
		
		while (i<n+1){
			if (a[i][j] == 1){
				a[i][j] = 2;
				j++;	
			}
			if (a[i][j] == 2){
				i++;
			}
			if (a[i][j] == 3){
				a[i][j] = 2;
				j--;	
			}			
		}
		cout << j << " ";
	
	}
}












