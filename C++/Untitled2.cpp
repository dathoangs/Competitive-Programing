#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int n, tmp;
vector <ll> pre;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	for (int i = 1; i<250; i++){
		for (int j = i; j<250; j++){
			tmp = (4*i+1) * (4*j+1);
			pre.push_back(tmp);
		}
	}
	
	sort(pre.begin(), pre.end());
	
	cin >> n;
	while (n != 0){
		cout << n << " ";// <<  << "\n";
		int l, r, m, ans = 0;
		l = 0; r= pre.size() -1;
		while (l<=r){
			m = (l+r) >>1;
			if (pre[m] == n){
				ans = m;
				break;
			} else if (pre[m] > n){
				r = m -1;
			} else l = m+1;
		}
		cout << ans << "\n";
		cin >> n;
	}
	
	for (int i = 50; i<70; i++){
		cout << pre[i] << " ";
	}

	
}


