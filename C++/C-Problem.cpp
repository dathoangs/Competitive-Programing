#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int n, s, ans;
vector <int> a;
vector <int> pre;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	cin >> n >> s;
	a.resize(n+7);
	pre.resize(n+7);
	
	cin >> a[0];
	pre[0] = a[0];
	
	for (int i = 1; i<n; i++){
		cin >> a[i];
		pre[i] = a[i] + pre[i-1];
	}
	
	cout << "\n";
	for (int i = 0; i<n-1; i++){
		for (int j = i+1; j<n; j++){
//			cout << pre[j] - pre[i] << " ";
			if (pre[j] - pre[i] == s)
				ans++;
		}
	}
	
	cout << ans;
}


