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

	vector <ll> pre;

	ll tmp = 1;
	while (tmp < 1e11){
		pre.pb(tmp);
		tmp*=10;
	}

	ll t, m;

	cin >> t;

	while (t--){
		cin >> m;
		int i = 0;
		while (pre[i] < m){
			i++;
		}

		if (m != pre[i]){
			i--;
			cout << m-pre[i] << endln;
		} else {
			cout << m-pre[i] << endln;
		}

	}


	cout << endln;
	return 0;	
}