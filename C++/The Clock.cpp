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

	ll t;

	cin >> t;

	while (t--){
		string s;
		int h, m, x, hh, mm, ans = 0;
		map <int, bool> mph;
		map <int, bool> mpm;

		cin >> s >> x;

		h = stoi(s.substr(0,2));
		m = stoi(s.substr(3,2));

		hh = x/60;
		mm = x%60;

		while (mph[h] == false || mpm[m] == false){
			if (h/10 == m%10 && h%10 == m/10){
				ans++;
				
			}
			
			mph[h] = true;
			mpm[m] = true;

			h += hh;
			m += mm;

			if (h >= 24){
				h = h-24;
			}

			if (m >= 60){
				m -= 60;
				h++;
			}

			cout << h << " " << m << endln;

		}

		cout << ans << endln;


	}

	cout << endln;
	return 0;	
}