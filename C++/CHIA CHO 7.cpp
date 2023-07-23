#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int t, n, ans;
int pre[5*((int)pow(10,4)) + 7];

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	cin >> t;
	
	for (int tt = 1; tt<=t; tt++){
		cin >> n;
		pre[t] = pre[t-1] + n;
	}
	
	for (int i = t; i>=1; i--){
		for (int j = 0; j<i; j++){
			if ((pre[i] - pre[j]) % 7 == 0 && i-j>ans){
				ans = i-j;
			}
		}
	}
	
	cout << ans - 1;
}


