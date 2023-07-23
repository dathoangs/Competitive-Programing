#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int t, n, m, r, c;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	cin >> t;
	
	while(t--){
		cin >> n >> m >> r >> c;
		
		cout << max(abs(1-r), abs(n-r)) + max(abs(1-c), abs(m-c)) << "\n";
	}
}


