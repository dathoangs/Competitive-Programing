#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define null NULL
using namespace std;
vector <ull> ti;
map <ull, bool> mp;
int ans, n, m, a;
ull d;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	cin >> n >> m >> a >> d;
	
	for (int i = 0; i<m; i++){
		ull tmp;
		cin >> tmp;
		ti.pb(tmp);
	}
	
	for (int i = 1; i<=n; i++){
		ti.pb(a*i);
	}
	
	sort(ti.begin(), ti.end());
	
	for (int i = 0; i<ti.size(); i++){
		if(mp[ti[i]] == 1){
			continue;
		} else {
			ans++;
			for (int j = 0; j<d; j++){
				mp[ti[i+j]] = 1;
			}
		}
	}
	
	cout << ans;
	
}






















