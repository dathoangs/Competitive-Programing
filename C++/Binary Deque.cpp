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
		ll n, s, tmp=0;

		cin >> n >> s;

		vector <ll> a(n);

		fore (i,0,n){
			cin >> a[i];
			tmp+=a[i];
		}

		if (tmp < s){
			cout << -1 << endln;
			continue;
		}

		if (tmp == s){
			cout << 0 << endln;
			continue;
		}	

		int trai = 0, right = a.size()-1, phai = 0, ans = 0;
		while (tmp > s){
			while (a[trai] != 1){
				trai++;
			}
			while (a[right] != 1){
				phai++;
				right--;
			}

			// cout << trai << " ";
			// cout << phai;
			if (trai < phai){
				
				tmp--;
				ans += trai+1;
				trai = 0;
				trai++;
				// cout << " 1\n";
			} else {
				// cout << " 2\n";				
				tmp--;
				ans += phai+1;
				phai = 0;
				right--;
			}
		}	

		cout << ans << endln;

	}

	cout << endln;
	return 0;	
}