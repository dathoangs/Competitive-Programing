#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define null NULL
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	int n;
	cin >> n;;

	int tree[n+7][n+7]  {};

	for (int i = 0; i<n; i++){
		int a, b;
		cin >> a >> b;
		tree[a][b] = 1;
	}
	
	

}