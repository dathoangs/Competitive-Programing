#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
char a[9][9];
int chk = 0, cnt = 0;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	for (int i = 2; i<7; i++){
		for (int j = 2; j<7; j++){
			cin >> a[i][j];
		}
	}
	 
	for (int i = 2; i<7; i++){
		for (int j = 2; j<7; j++){
			if (a[i][j] == 'k'){
				cnt++;
				if (a[i+2][j-1] == 'k' || a[i+2][j+1] == 'k' || a[i-2][j-1] == 'k' || a[i-2][j+1] == 'k' 
				 || a[i-1][j+2] == 'k' || a[i+1][j+2] == 'k' || a[i-1][j-2] == 'k' || a[i+1][j-2] == 'k'){
					chk++;
					break;
				}	
			}
		}
	}
	
	if (chk == 0 && cnt == 9) cout << "valid";
	else cout << "invalid";
		
}


