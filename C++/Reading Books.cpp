#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int n, ans;
vector <int> b;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	cin >> n;
	b.resize(n+7);
	for (int i = 0; i<n; i++){
		cin >> b[i];
	}
	
	for (int i = 0; i<n-1; i++){
		ans += b[i];
	}
	
	if (ans > b[n-1])	cout << ans + b[n-1];
	else cout << ans + b[n-1] + (ans - b[n-1]);
}


