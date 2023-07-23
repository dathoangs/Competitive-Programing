#include <bits/stdc++.h>
using namespace std;
unsigned long long int n,dn,t,tmp;
int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	cin>>t;
	
	for (int i = 0; i<t; i++){
		cin >> n;
		dn = 5;
		tmp = 0;
		if (n < 5) 
			cout << 0;
		else {
			do {
				tmp += floor(n/dn);
				dn *= 5;
			} while (dn < n);
			cout << tmp << "\n";			
		}			
	}
}


