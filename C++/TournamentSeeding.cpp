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

	ll n, k, ans = 0;

	cin >> n >> k;

	n = pow(2,n);

	vector <ll> a(n);

	fore (i,0,n){
		cin >> a[i];
	}

	sort(rall(a));

	ll tmp = 2;

	while (tmp <= n){
		map <ll, bool> chk;
		fore (i,0,tmp){
			fore(j,i+1,tmp){
				if (a[i] - a[j] <= k && chk[a[j]] == false && chk[a[i]] == false){
					ans++;
					chk[a[j]] = true;
					break;
				}
			}
		}
		tmp*=2;
	}

	cout << ans;

	cout << endln;
	return 0;	
}