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

	ll s, t, a, b, m, n, ans = 0;

	cin >> s >> t >> a >> b >> m >> n;

	if (s > t){
		swap(s, t);
	}

	vector <ll> arr(m+5);
	vector <ll> brr(n+5);

	fore(i,0,m){
		cin >> arr[i];
	}

	fore(i,0,n){
		cin >> brr[i];
	}

	fore (i,0,m){
		if (a+arr[i] >= s && a+arr[i] <= t){
			ans++;
		}
	}

	cout << ans << endln;
	ans = 0;

	fore (i,0,n){
		if (b+brr[i] >= s && b+brr[i] <= t){
			ans++;
		}
	}
	cout << ans << endln;

	cout << endln;
	return 0;	
}