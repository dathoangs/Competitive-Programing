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

	ll n, times, ans;
	cin >> n;

	vector <ll> a(n+7, 0);

	fore(i,1,n+1){
		cin >> a[i];
	}

	sort(rall(a));

	for (int i = 1; i<n+1; i++){
		if (a[i+1]*(i+1) > a[i]*i){
			ans = a[i+1];
			times = i+1;
		} 
	}

	cout << times << " " << ans;

	cout << endln;
	return 0;	
}