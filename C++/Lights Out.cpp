#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define null NULL
using namespace std;
int tmp[6][6], ans[6][6];

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	for (int i = 0; i<6; i++)
		for (int j = 0; j<6; j++)
			ans[i][j] = 1;

	for (int i = 1; i<=3; i++){
		for (int j = 1; j<=3; j++){
			cin >> tmp[i][j];
		}
	}
	
	for (int i = 1; i<=3; i++){
		for (int j = 1; j<=3; j++){
			if (tmp[i][j] % 2 != 0){
				if (ans[i][j] == 1) ans[i][j] = 0;
				else ans[i][j] = 1;
				
				if (ans[i-1][j] == 1) ans[i-1][j] = 0;
				else ans[i-1][j] = 1;
				
				if (ans[i+1][j] == 1) ans[i+1][j] = 0;
				else ans[i][j] = 1;
				
				if (ans[i][j-1] == 1) ans[i][j-1] = 0;
				else ans[i][j-1] = 1;
				
				if (ans[i][j+1] == 1) ans[i][j+1] = 0;
				else ans[i][j+1] = 1;	
			}
		}
	}
	
	for (int i = 1; i<=3; i++){
		for (int j = 1; j<=3; j++){
			cout << ans[i][j];
		}
		cout << "\n";
	}	
	
		
}
























