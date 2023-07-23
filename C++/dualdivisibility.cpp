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

	ll a, b, tmp, ans = 0;

	vector <ll> pre;

	cin >> a >> b;

	tmp = b;

	for (int i = 2; i<=10; i++){
		if (tmp > a){
			break;
		} else {
			pre.pb(tmp);
			tmp = b*i;
		}
	}

	for (int i = 0; i<pre.size(); i++){
		if (a*1.0/pre[i] == a/pre[i]){
			ans++;
		}
	}

	cout << ans;

	cout << endln;
	return 0;	
}