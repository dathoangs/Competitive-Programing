#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);	
	unsigned long long int t,n;
	cin >> t;
	for (unsigned long long int i = 0; i < t; i++) {
		cin >> n;
		if (n == 1) 
			cout << 5 << "\n";
		else
			cout << 25 << "\n";
	}
}
