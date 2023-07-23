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
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	int n;
	cin >> n;

	vector <ll> s(n), v(n);

	fore(i,0,n) cin >> s[i] >> v[i];

	int ans = min(n, 2);

	fore (i,0,n){
		fore(j,i+1,n){
			vector <pair<ll, ll>> one;
			int always = 2;

			fore(q,j+1,n){
				if ((v[q] - v[i]) * (j-i) == (v[j] - v[i]) * (q-i) && 
					(s[q] - s[i]) * (j-i) == (s[j] - s[i]) * (q-i)){

					always++;

				} else if ((v[q] - v[i]) * (j-i) != (v[j] - v[i]) * (q-i)){
					ll y = (v[q] - v[i]) * (j-i) - (v[j] - v[i]) * (q-i);
					ll x = (s[q] - s[i]) * (j-i) - (s[j] - s[i]) * (q-i);

					if (y < 0){
						x = -x;
						y = -y;
					}

					ll t = __gcd(x, y);

					x /= t;
					y /= t;
					one.pb({x, y});
				}
			}

			sort (one.begin(), one.end());
			int cnt = 1;
			fore (q,1,(int)one.size()){
				if (one[q] ==  one[q-1]) cnt++;
				else {
					int nw = always + cnt;
					if (one[q-1].first >= 0) ans = max(ans, nw);
					cnt = 1;
				}
			}

			int nw = always + cnt;
			if (one.size() > 0 && one.back().first >= 0)
				ans = max(ans, nw);
		}

		cout << ans << endln;
	}



	cout << endln;
	return 0;	
}