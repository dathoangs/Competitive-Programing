#include <bits/stdc++.h>
using namespace std;
vector <bool> chk;
int ans, a, b, c, d;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	cin >> a >> b;
	cin >> c >> d;
	ans = 0;
	chk.resize(max(b, d) + 10);
	
	for (int i = a; i<b; i++){
		chk[i] = true;
	}
	
	for (int i = c; i<d; i++){
		chk[i] = true;
	}
	
	for (int i = 0; i<chk.size(); i++){
		if (chk[i] == true){
			ans++;
		}
	}
	cout << ans;
}


