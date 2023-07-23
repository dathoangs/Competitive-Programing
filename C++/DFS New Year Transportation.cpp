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
vector <ll> g[30005];
bool chk = false;
map <ll, bool> visited;

void dfs(ll n, ll des){
	if (n == des){
		chk = true;
		return;
	}

	if (!visited[n]){
		visited[n] = true;
		for (int i = 0; i<g[n].size(); i++){
			dfs(g[n][i], des);				
		}		
	}
	return;
}

int main() {
	// freopen("input", "r", stdin);
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	ll n, t;

	cin >> n >> t;

	fore(i,1,n){
		ll tmp;

		cin >> tmp;

		g[i].pb(tmp+i);
	}

	dfs(1, t);

	if (chk){
		cout << "YES";
	} else {
		cout << "NO";
	}

	cout << endln;
	return 0;	
}