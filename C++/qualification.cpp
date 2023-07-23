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

	ll n;

	cin >> n;

	vector <ll> a(n), prefix(n);

	for (ll &i:a) cin >> i;

	ll need = (accumulate(a.begin(), a.end(), (ll)0) + 1) / 2;

	multiset <ll> min_set;
	ll ans = n;

	prefix[0] = a[0];
	min_set.insert(a[0]);

	fore(i,1,n){
		prefix[i] = prefix[i-1] + a[i];
	}

	ll p = 0, q;

	while (p < n){
		q = p+1;
		while (q < n){
			min_set.insert(a[q]);
			if (prefix[q] - prefix[p] - *min_set.begin() >= need){
				ans = min(ans, q-p);
			}
			q++;
		}
		min_set.erase(a[p]);
		p++;
	}

	if (n == 2){
		cout << ans;
	} else {
		cout << ans-1;		
	}



	cout << endln;
	return 0;	
}