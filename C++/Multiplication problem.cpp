#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define null NULL
using namespace std;
int t, n;
vector <ull> pre;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	pre.pb(0);
	for (int i = 1; i<100000000; i++){
		pre.pb((i*(i+1) % 1000000007 + pre[i-1]) % 1000000007);	
	}
	
	cin >> t;
	
	while (t--){
		cin >> n;
		cout << pre[n] << "\n";
	}
	
}

