#include <bits/stdc++.h>
using namespace std;
int t, n, a, b, chk;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	cin >> t;
	
	for (int tt = 0; tt<t; tt++){
		cin >> n >> a >> b;
		chk = 0;
		
		while (n>=b){
			cout << bool(pow(n, 1.0/a)) << " " << pow(n, 1.0/a) << " " << n << "\n";
			if(pow(n, 1.0/a) == 0){
				cout << "YES\n";
				chk++;
				break;
			}
			else 
				n -= b;
			if (n == 0){
				cout << "YES\n";
				chk++;
				break;
			}
		}
		
		if (chk == 0)
			cout << "NO\n";
	}
}


