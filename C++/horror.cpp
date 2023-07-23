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
	// freopen("input", "r", stdin);
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	ll n, h, l, tmp, a, b, mx = 0, mn;

	cin >> n >> h >> l;

	vector <ll> movie(n,INT_MAX);
	vector <vector<ll>> similar(n);
	vector <ll> chk;

	fore (i,0,h){
		cin >> tmp;
		movie[tmp] = 0;
		chk.pb(tmp);
	}

	fore (i,0,l){
		cin >> a >> b;

		similar[a].pb(b);
		similar[b].pb(a);
	}

	while (!chk.empty()){
		for (int i = 0; i< similar[chk[0]].size(); i++){
			if (movie[similar[chk[0]][i]] > movie[chk[0]]+1 ){
				movie[similar[chk[0]][i]] = movie[chk[0]]+1;
				chk.pb(similar[chk[0]][i]);
			}
		}
		chk.erase(chk.begin());
	}

	fore(i,0,n){
		if (mx < movie[i]){
			mx = movie[i];
			mn = i;
		}
	}

	cout << mn;

	cout << endln;
	return 0;	
}