#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,b,a) for(int i = b; i<a; i++)
#define null NULL
#define endln "\n"
using namespace std;

int main() {
	freopen("input", "r", stdin);
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	ll t;

	cin >> t;

	while (t--){
		ll n, H, M, ans_h = INT_MAX, ans_m = INT_MAX;

		cin >> n >> H >> M;

		fore(i,0,n){
			ll h, m, tmp_h, tmp_m;
			cin >> h >> m;

			if (h == H && m == M){
				ans_h = 0; 
				ans_m = 0;
				i = n;
			}

			if (H < h){
				tmp_h = h - H;
				if (m < M){
					tmp_h--;
					tmp_m = 60 - M;
				} else {
					tmp_m = m - M;
				}
			} 

			if (H >= h){
				if (h == H && M < m){
					ans_h = 0;
					ans_m = m - M;
				} else {
					ans_h = 23-H;
					ans_m = 60-M;
					ans_h += h;
					ans_m += m;				
				}
			}

			if (tmp_h <= ans_h){
				ans_h = tmp_h;
				if (tmp_m <= ans_m){
					ans_m = tmp_m ;
				}
			}

		}

		cout << ans_h << " " << ans_m << endln;
	}

	cout << endln;
	return 0;	
}