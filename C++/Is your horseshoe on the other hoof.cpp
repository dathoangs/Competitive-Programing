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
map <ll, int> mp;

int main() {
	// freopen("input", "r", stdin);
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	ll tmp, ans = 0;

	fore(i,0,4){
		cin >> tmp;
		if (mp[tmp] == 0){
			mp[tmp] = 1;
		} else {
			ans++;
		}
	}

	cout << ans;



	cout << endln;
	return 0;	
}