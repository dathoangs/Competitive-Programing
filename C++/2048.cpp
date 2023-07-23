#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int a[4][4];
int roat[4][4], dchk[4][4];
int n, chk = 2;

void xoay (int a[4][4]){
	
	for (int i = 0; i < 4; ++i) {
       	for (int j = 0; j < 4; ++j) {
       		roat[i][j] = a[3 - j][i];
       	}
    }
    	
	for (int i = 0; i<4; i++){
		for (int j = 0; j<4; j++){
			a[i][j] = roat[i][j];
		}
	}  
}  


void cong (int a[4][4]){
	for (int i = 0; i<4;){
		if (chk == 0) i++;
		chk = 0;
		for (int j = 0; j<3;j++){
			if ((a[i][j] == 0 && a[i][j+1] != 0)){
				a[i][j] += a[i][j+1];
				a[i][j+1] = 0;
				chk++;
				dchk[i][j] = dchk[i][j+1];
				dchk[i][j+1] = 0;
			}
			
			if ((a[i][j] == a[i][j+1] && a[i][j] != 0) && dchk[i][j] == 0 && dchk[i][j+1] == 0){
				a[i][j] += a[i][j+1];
				a[i][j+1] = 0;		
				dchk[i][j] = 1;	
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	for (int i = 0; i<4; i++)
		for (int j = 0; j<4; j++){
			cin >> a[i][j];
		}
	
	cin >> n;
		
	for (int t = 0; t<4-n; t++){
		xoay(a);
	}
	cong(a);
	for (int t = 0; t<n; t++){
		xoay(a);
	}

	
	for (int i = 0; i<4; i++){
		for (int j = 0; j<4; j++){
			cout << a[i][j] << " ";
		}
		cout << "\n";			
	}


		
}


