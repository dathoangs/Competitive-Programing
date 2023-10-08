#include<bits/stdc++.h>
#define fastIO ios::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define ll long long
#define fi first
#define se second
#define mod 1000000007
#define endl '\n'
using namespace std;

int main() {
	fastIO;
	int t; cin >> t;
	while(t--) {
		int n, m, x, y;
		cin >> n >> m >> x >> y;
		vector<string> v;
		for (int i=0; i<n; i++) {
			string x; cin >> x;
			v.pb(x);
		}
		ll res = 0;
		for (int i=0; i<n; i++) {
			int cnt = 0;
			for (int j=0; j<m;) {
				while(v[i][j] == '.') {
					++cnt;
					j++;
				}
				while(cnt) {
					if (cnt>=2) {
						if (x>=y) {
							cnt-=2;
							res+=y;
						} else {
							cnt--;
							res+=x;
						}
					} else {
						cnt=0;
						res+=x;
					}
				}
				while(v[i][j] == '*') {
					j++;
				}
			}
		}
		cout << res << endl;
	} 
	return 0;
}

//*****
//.....
//*.*
//..***.