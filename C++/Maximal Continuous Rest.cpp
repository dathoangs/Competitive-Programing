#include <bits/stdc++.h>
using namespace std;
int n, post, mx;
vector <int> a;
vector <int> chk (1, 0);

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	cin >> n;
	a.resize(n+7);
	
	for (int i = 0; i<n; i++){
		cin >> a[i];
		if (a[i] == 1){
			chk[post]++;
		}
		else{
			chk.push_back(0);
			post++;
		}
	}
	
	mx = chk[0] + chk[chk.size() - 1];

	sort(chk.rbegin(), chk.rend());
	if (chk[0] > mx)
		mx = chk[0];	
	
	cout << mx;
	
}


