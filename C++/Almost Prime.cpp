#include <bits/stdc++.h>
using namespace std;
const int Max = 1500+10;
vector <bool> chk(Max, true);
int n, tmp, ans;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	chk[0] = false;
	chk[1] = false;
	for (int i = 2; i*i<Max; i++){
		if (chk[i]){
			for (int j = i*i; j<Max; j += i)
				chk[j] = false;
		}
	}
	
	cin >> n;
	
	if (n < 6){
		cout << 0;
		return 0;
	}
	
	while (n>=6){
		tmp = 0;
		if (sqrt(n) == int(sqrt(n)) && chk[(int)sqrt(n)]){
			for (int i = 1; i<n; i++){
				if (n%i == 0 && chk[i]){
					tmp++;
					if (tmp == 3){
						break;
					}
				}
			}	
		}	
		if (tmp == 2)
			ans++;		
		n--;
	}
	cout << ans;
}
