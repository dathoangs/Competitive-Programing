#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int n, q, Log = ;
vector <int> a;
int st [1e5+5][20];

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	cin >> n;
	a.resize(n+7);
	
	for (int i = 0; i<n; i++)
		cin >> a[i];
	
	for (int i = 0; i<n; i++)
		st[i][0] = a[i];
		
	for (int i = 1; (1 << i) <= n; i++){
		for (int j = 0; j + (1 << j) <= n; i++){
			st[j][i] = min(st[i][j-1], st[i + (1<<(j-1))][j-1]);
			
		}
	}
	
}


