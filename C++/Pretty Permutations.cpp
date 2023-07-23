#include <bits/stdc++.h>
using namespace std;
int t, n;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	cin >> t;
	
	for (int tt = 0; tt<t; tt++){
		cin >> n;
		for (int i = 1; i<n-2; i+=2){
			cout << i+1 << " " << i << " ";
		}
		if (n%2 == 0)
			cout << n << " " << n-1 << "\n";
		if (n%2 != 0)
			cout << n << " " << n-2 << " " << n-1 << "\n";
	}
}


